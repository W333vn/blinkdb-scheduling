"""
Interfaces for scheduling queries.

@author: Henry Milner (henrym@eecs.berkeley.edu)
"""

class Scheduler(object):
  """
  Abstract interface for schedulers.
  """
  def handleNewQuery(self, newSystemState):
    """
    Handle a new query.
    @newSystemState is the new state of the system immediately after the new
      query has arrived.
    @return a new Schedule.  The schedule is valid until the next new query
      arrives, at which time this method should be called again to get an
      updated schedule.
    """
    return None

class OfflineScheduler(Scheduler):
  """
  Marker interface for schedulers that solve an offline scheduling problem.
  That is, they require full knowledge of future inputs to make their
  scheduling decisions.
  """

class Schedule(object):
  """
  A schedule of tasks produced by a scheduler.  Users can ask for all the tasks
  that are scheduled for each time tick.
  """
  EMPTY_SCHEDULE = []

  def __init__(self, tasksByTime):
    """
    @tasksByTime: A dictionary from time to lists of ScheduledTasks.
    """
    self.tasksByTime = tasksByTime

  def getScheduledTasksForTime(self, time):
    """
    Get a list of ScheduledTasks, containing all the tasks that are scheduled
    to start at time @tick along with the machine to which they should be
    assigned.
    """
    return self.tasksByTime.get(time, Schedule.EMPTY_SCHEDULE)

class SystemConfiguration(object):
  """
  The static configuration of a system - information that does not change over
  time.
  """
  def __init__(self, machines):
    """
    @machines: The set of Machines available for processing.
    """
    self.machines = machines

  def getMachines(self):
    return self.machines

class SystemState(object):
  """
  The current state of a system.
  """
  def __init__(self, configuration, currentTime, queue, runningTasks):
    """
    @configuration: The static configuration of the system.
    @currentTime: The current time, in ticks (time is defined in arbitrary
      units).
    @queue: The current queue of queries, including queries that currently
      have tasks running but have not yet finished.
    @runningTasks: A list of RunningTasks, the tasks that are currently running
      along with the machines on which they are running.
    """
    self.configuration = configuration
    self.currentTime = currentTime
    self.queue = queue
    self.runningTasks = runningTasks
    
  def getConfiguration(self):
    return self.configuration

  def getCurrentTime(self):
    return self.currentTime

  def getQueue(self):
    """
    A list of the currently-enqueued queries.
    """
    return self.queue

  def getRunningTasks(self):
    return self.runningTasks

class Query(object):
  """
  A query that a user wants to execute.  For purposes of scheduling, a query is
  a list of alternative job DAGs, executing any one of which is sufficient to
  satisfy the query.  Typically, each alternative will have similar DAG form
  but will run on different data.  For example, we might run a query on a
  simple random sample of 100GB or on a stratified sample of 10GB.  In that
  case, @executionAlternatives will be a list of 2 JobDags.

  To help clarify what a Query looks like, let me note that there are 3
  decision points for a Query.  The data for each decision point is
  represented somewhere in the hierarchy of this data structure, and there
  are more details in the documentation for JobDag and classes underneath it.
  The decision points are:
   * We can decide among alternatives in the list of @executionAlternatives.
   * For each alternative, we get a DAG of jobs.  Each job is executed as
     one or more tasks on particular datasets and particular machines.  Here
     we can choose among different datasets.  For example, if we need 4
     blocks of random sample data and there are 20 available, each equally
     valid as a sample, we can choose 4 that are on unused machines or that
     are resident in memory somewhere.
   * Given a dataset, we can also choose which machine to run on.  We might
     choose a machine where the dataset is resident in memory, or we might
     choose another machine and ship the dataset over the network.
  """

  def __init__(self, executionAlternatives):
    """
    @executionAlternatives is a list of JobDags, any one of which is
      sufficient to satisfy this query.
    """
    self.executionAlternatives = executionAlternatives
  
  def getExecutionAlternatives(self):
    return self.executionAlternatives

class JobDag(object):
  def __init__(self, root):
    """
    @root is the last node that needs to be executed - the single node that
      produces the result of a query and on which nothing depends.
      @root.getChildren() points recursively to the rest of this graph.
    """
    self.root = root
  
  def getRoot(self):
    return self.root

class JobNode(object):
  def __init__(self, job, children):
    """
    @children is a list of children on which @job depends.  That is, @job
      cannot be executed until @children are executed.
    """
    self.job = job
    self.children = children
  
  def getJob(self):
    return self.job
  
  def getChildren(self):
    return self.children

class Job(object):
  """
  A logical part of a query, like a map or reduce.  Comprised of one or more
  logical tasks.  @numRequiredTasks unique tasks must be completed before this
  job is completed.  (If len(@tasks) == @numRequiredTasks, all the tasks must
  be completed.  Otherwise len(@tasks) > @numRequiredTasks, and the scheduler
  has some choice.)

  Note: It only makes sense to have len(@tasks) > @numRequiredTasks if the
  tasks are all interchangeable.
  """
  def __init__(self, tasks, numRequiredTasks):
    assert len(tasks) >= numRequiredTasks
    self.tasks = tasks
    self.numRequiredTasks = numRequiredTasks
  
  def getTasks(self):
    return self.tasks

  def getNumRequiredTasks(self):
    return self.numRequiredTasks

class Task(object):
  """
  A part of a job, like a mapper, which acts on a particular dataset.  We are
  free to choose where to run the task.  We assume that we know the time it
  will take to run this task on each machine.

  NOTE(henry): Someone has to multiply the data size by an appropriate constant
  depending on whether the dataset is in memory, on disk, or not resident on
  the machine in order to derive the running time.  Currently I'm assuming
  someone else is doing that, but we could do it here.
  """
  def __init__(self, locationRunningTimes):
    self.locationRunningTimes = locationRunningTimes

  def getRunningTime(self, machine):
    return self.locationRunningTimes[machine]

class Machine(object):
  def __init__(self, id):
    self.id = id

  def getId(self):
    return self.id

class RunningTask(object):
  """
  A representation of a task that is currently running on a machine, along with
  the remaining time before the task finishes.
  """
  def __init__(self, task, machine, remainingTime):
    self.task = task
    self.machine = machine
    self.remainingTime = remainingTime

  def getTask(self):
    return self.task

  def getMachine(self):
    return self.machine

  def getRemainingTime(self):
    return self.remainingTime

class ScheduledTask(object):
  """
  A task that is scheduled to run on a particular machine.
  """
  def __init__(self, task, machine):
    self.task = task
    self.machine = machine

  def getTask(self):
    return self.task

  def getMachine(self):
    return self.machine

  def __eq__(self, other):
    return self.task == other.task and self.machine == other.machine

  def __ne__(self, other):
    return not self == other

class SystemFutureState(object):
  """
  The full state of a system over time, including the queries that will be
  received.  This is the state that an oracular (or offline) scheduler knows
  when it makes scheduling decisions.
  """
  def __init__(self, futureQueries):
    """
    @futureQueries: A list of FutureQueries, all the queries that will be
      received by this system.
    """
    self.futureQueries = sorted(futureQueries, key=lambda query: query.getRequestTime())

  def getFutureQueries(self):
    return self.futureQueries

class FutureQuery(object):
  def __init__(self, query, requestTime):
    self.query = query
    self.requestTime = requestTime

  def getQuery(self):
    return self.query

  def getRequestTime(self):
    return self.requestTime