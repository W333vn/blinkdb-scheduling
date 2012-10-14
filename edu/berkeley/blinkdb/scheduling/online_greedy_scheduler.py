"""
Online queue-greedy scheduling algorithm for BlinkDB simulations.

@author: Henry Milner (henrym@eecs.berkeley.edu)
"""
import unittest
from collections import defaultdict
import logging

from zibopt import scip
from edu.berkeley.blinkdb.scheduling import scheduling

from edu.berkeley.blinkdb.scheduling.scheduling import *
from edu.berkeley.blinkdb.scheduling.util import *

LOG = logging.getLogger(__name__)
LOG.setLevel(logging.DEBUG)

def addFakeRoots(query):
  """
  For each query in @queries, add a 0-time job depending on the root
  tasks of that query.  This allows us to care only about the finishing time
  of the new fake root.
  """

  def addFakeRoot(originalJobDag):
    fakeRootJob = Job(None, [scheduling.Task(None, defaultdict(int))], 1)
    return JobDag(JobNode(fakeRootJob, [originalJobDag.getRoot()]))

  return Query(query.getId(), [addFakeRoot(originalJobDag) for originalJobDag in query.getExecutionAlternatives()])

def creditTimeAlreadySpent(query, preexistingAssignments):
  """
  Credit tasks for time already spent on them.

  @preexistingAssignments: A map from task ID to RunningTask, including all the
    tasks that are already running.
  """
  def handleTask(task):
    taskId = task.getId()
    if preexistingAssignments.has_key(taskId):
      assignment = preexistingAssignments[taskId]
      return [scheduling.Task(task.getId(), defaultdict(int, {assignment.getMachine(): assignment.getRemainingTime()}))]
    else:
      return [task]

  return Query(query.getId(), [flatMapDag(handleTask, alternative) for alternative in query.getExecutionAlternatives()])

def removeCompletedTasks(query, completedTasks):
  """
  Remove tasks that have already been completed from @query.
  """
  def handleTask(task):
    if task in completedTasks:
      return NIL
    else:
      return [task]

  return Query(query.getId(), [flatMapDag(handleTask, alternative) for alternative in query.getExecutionAlternatives()])


def flatMapDag(mapper, jobDag):
  """
  Apply @mapper as a flatmap against each task in @jobDag.  @mapper should map
  a single task to a list of tasks, potentially empty.  The resulting tasks
  are added to their original nodes in the DAG, and the resulting DAG is
  returned.  The number of required tasks for each job is increased by the
  increase in number of tasks available for that job.  (For example, if a job
  previously had 4 tasks and required 4 tasks to finish, and the result of
  flatMapping its tasks gives us 6 tasks, the job will now require 6 tasks to
  finish.  Or, if the job previously had 4 tasks and required 3, and now it has
  2 tasks, it will require 1.  I acknowledge that this is a little kludgy.)
  """
  # The nodes we've already visited, and their map results.  This is just a
  # quick memoization trick to ensure we only map each node once.
  visitedNodes = {}

  def flatMapNode(mapper, jobNode):
    if visitedNodes.has_key(jobNode):
      return visitedNodes[jobNode]
    else:
      originalJob = jobNode.getJob()
      originalTasks = originalJob.getTasks()
      mappedTasks = list(flatMap(mapper, originalTasks))
      mappedJob = Job(originalJob.getId(), mappedTasks, max(0, originalJob.getNumRequiredTasks() + len(mappedTasks) - len(originalTasks)))
      mappedNode = JobNode(mappedJob, [flatMapNode(mapper, child) for child in jobNode.getChildren()])
      visitedNodes[jobNode] = mappedNode
      return mappedNode

  return JobDag(flatMapNode(mapper, jobDag.getRoot()))

def visitTasks(query, visitor):
  """
  Visit all tasks in @query with @visitor.

  @visitor: lambda task, jobNode, jobDag: [do arbitrary things]
  """
  visitedNodes = set()

  def visitTasksUnderNode(jobDag, jobNode):
    if jobNode in visitedNodes:
      return
    else:
      visitedNodes.add(jobNode)
      for task in jobNode.getJob().getTasks():
        visitor(task, jobNode, jobDag)
      for child in jobNode.getChildren():
        visitTasksUnderNode(jobDag, child)

  for jobDag in query.getExecutionAlternatives():
    visitTasksUnderNode(jobDag, jobDag.getRoot())

def tasksInQuery(query):
  """
  @return an iterator over all the tasks in @query.
  """
  tasks = []
  visitTasks(query, lambda task, jobNode, jobDag: tasks.append(task))
  return tasks


def mapTasksToNodes(query):
  """
  @return a map from the tasks in @query to the JobNodes in which they reside.
  """
  theMap = {}
  def visitTask(task, jobNode, jobDag): theMap[task] = jobNode
  visitTasks(query, visitTask)
  return theMap

# This constant is used when we want a number larger than any other number the
# solver is likely to encounter.
# Note: I ran into problems when I made this number too large (e.g. 2**30).
# The issue is that the solver can choose very small numbers whose product
# with LARGE_NUMBER is non-negligible but which apparently count as close
# enough to 0 for the solver!
# Since this number has to be bigger than any task running time, this means
# we can't handle very short time quanta for very long running tasks.
LARGE_NUMBER = 2**20

class OnlineGreedyScheduler(Scheduler):
  def __init__(self):
    pass

  def handleNewQuery(self, newSystemState):
    """
    Greedily schedule enough tasks so that all queries in the queue will be
    performed.
    """

    # Current simplifications:
    #  - No alternatives (only first alternative job is considered)
    #  - No alternative datasets (numRequiredTasks = len(tasks))
    #  - It is assumed we know the running times and implicitly the locations
    #    of intermediate data

    # The set of tasks in our original input, before we do any tricky
    # modifications to facilitate solving our optimization problem.
    originalTasks = frozenset(flatten(tasksInQuery(query) for query in newSystemState.getQueue()))

    machines = newSystemState.getConfiguration().getMachines()
    machineIndices = {machine:index for index, machine in enumerate(machines)}
    numMachines = len(machines)

    # Map from Tasks to RunningTasks.  Each Task that is already running (and
    # therefore has a preexisting assignment) is represented.
    preexistingAssignments = {}
    for runningTask in newSystemState.getRunningTasks():
      preexistingAssignments[runningTask.getTask().getId()] = runningTask

    # Add fake roots to each DAG so we are guaranteed to have a single root on
    # each one.
    systemState = SystemState(
      newSystemState.getConfiguration(),
      newSystemState.getCurrentTime(),
      [addFakeRoots(query) for query in newSystemState.getQueue()],
      newSystemState.getRunningTasks(),
      newSystemState.getCompletedTasks()
    )

    fakeRoots = frozenset(flatten(tasksInQuery(query) for query in systemState.getQueue())) - originalTasks

    # Credit tasks for time already spent on them.  Note that this modifies
    # some tasks, but only the tasks that are already running.  We don't
    # need to worry that we will return the modified tasks when we build our
    # actual schedule, since the tasks that are already running are not
    # included in the schedule.
    systemState = SystemState(
      systemState.getConfiguration(),
      systemState.getCurrentTime(),
      [creditTimeAlreadySpent(query, preexistingAssignments) for query in systemState.getQueue()],
      systemState.getRunningTasks(),
      systemState.getCompletedTasks()
    )

    # Remove tasks that have already been completed.
    completedTasks = frozenset(systemState.getCompletedTasks())
    systemState = SystemState(
      systemState.getConfiguration(),
      systemState.getCurrentTime(),
      [removeCompletedTasks(query, completedTasks) for query in systemState.getQueue()],
      systemState.getRunningTasks(),
      systemState.getCompletedTasks()
    )

    # Note: We normalize all times so that the solver thinks now is time 0.
    # We just need to denormalize task starting times when we create the
    # schedule.
    currentTime = systemState.getCurrentTime()

    tasks = list(flatten(tasksInQuery(query) for query in systemState.getQueue()))
    taskIndices = {task:index for index, task in enumerate(tasks)}
    tasksById = {task.getId():task for task in tasks}
    numTasks = len(tasks)

    # The JobNode associated with each task.  This allows fast computation of
    # dependencies between tasks.
    tasksToNodes = unionDicts(mapTasksToNodes(query) for query in systemState.getQueue())

    solver = scip.solver(quiet=False)

    # Variables:
    # (Some variables are introduced later if they are not useful outside of
    # particular constraints.)

    # assignments[i][j] is true (i.e. 1) if task i is assigned to machine j.
    # Note that multiple tasks can be assigned to a machine, but some
    # constraints will ensure that they don't overlap in time if they do.
    # Each task must be assigned to at least 1 machine, assuming it needs to
    # run.
    assignments = [[solver.variable(scip.BINARY) for machineIdx in xrange(numMachines)]
                   for taskIdx in xrange(numTasks)] # Machines are columns, tasks are rows

    # startingTimes[i] is the time at which task i starts in our solution.
    startingTimes = [solver.variable(scip.CONTINUOUS) for taskIdx in xrange(numTasks)]

    # runningTimes[i] is the running time of task i in our solution.  This is a
    # variable, since it depends on where the task runs.
    # Note that, combining this with the above, startingTimes[i] + runningTimes[i]
    # is the finishing time of task i.
    runningTimes = [solver.variable(scip.CONTINUOUS) for taskIdx in xrange(numTasks)]

    # finishesAfterStarts[A][B] is true (i.e. 1) if task A finishes after task B
    # starts.  The point of this is that A and B run at the same time iff
    # finishesAfter[A][B] and finishesAfter[B][A] are both true.
    finishesAfterStarts = [[solver.variable(scip.BINARY) for taskIdxB in xrange(numTasks)]
                     for taskIdxA in xrange(numTasks)]

    # Encode the requirement that each task is assigned at least once.
    for taskIdx in xrange(numTasks):
      task = tasks[taskIdx]
      solver += sum(assignments[taskIdx]) >= 1

    # Encode the requirement that tasks that are already running must "start"
    # immediately on the machines they are running on.
    for preexistingAssignment in preexistingAssignments.itervalues():
      taskIdx = taskIndices[tasksById[preexistingAssignment.getTask().getId()]]
      assignedMachineIdx = machineIndices[preexistingAssignment.getMachine()]
      solver += startingTimes[taskIdx] == 0
      solver += assignments[taskIdx][assignedMachineIdx] == 1

    # Encode the requirement that each machine runs only 1 task at a time.
    for taskAIdx in xrange(numTasks):
      for taskBIdx in xrange(taskAIdx):
        # If A finishes after B starts, then the LHS here is positive and
        # finishesAfter[A][B] must be 1, in which case the constraint is
        # satisfied because the RHS is very large.  Otherwise,
        # finishesAfter[A][B] is free to be 0.
        solver += \
          (startingTimes[taskAIdx] + runningTimes[taskAIdx] - startingTimes[taskBIdx])\
            <= LARGE_NUMBER * finishesAfterStarts[taskAIdx][taskBIdx]

        solver += \
          (startingTimes[taskBIdx] + runningTimes[taskBIdx] - startingTimes[taskAIdx])\
            <= LARGE_NUMBER * finishesAfterStarts[taskBIdx][taskAIdx]

        for machineIdx in xrange(numMachines):
          # It can't be the case that A and B are both assigned to this machine
          # and they overlap in time.
          LOG.debug("%d and %d can't be assigned to machine %d and overlap" % (taskAIdx, taskBIdx, machineIdx))
          noOverlapBetweenAAndB = \
            (assignments[taskAIdx][machineIdx]
              + assignments[taskBIdx][machineIdx]
              + finishesAfterStarts[taskAIdx][taskBIdx]
              + finishesAfterStarts[taskBIdx][taskAIdx])\
            <= 3
          solver += noOverlapBetweenAAndB
        pass

    # Encode dependencies.
    for taskIdx in xrange(numTasks):
      jobNode = tasksToNodes[tasks[taskIdx]]
      dependentJobNodes = tasksToNodes[tasks[taskIdx]].getChildren()
      dependentTasks = flatten(jobNode.getJob().getTasks() for jobNode in dependentJobNodes)
      for dependencyTaskIdx in (taskIndices[task] for task in dependentTasks):
        LOG.debug("Task %d depends on %d" % (taskIdx, dependencyTaskIdx))
        taskStartsAfterDependency =\
          startingTimes[taskIdx] >= startingTimes[dependencyTaskIdx] + runningTimes[dependencyTaskIdx]
        solver += taskStartsAfterDependency

    # Encode costs.
    for machineIdx in xrange(numMachines):
      for taskIdx in xrange(numTasks):
        # If a task is assigned to a machine, its running time is at least the
        # time it takes to run on that machine.  (Technically the running time
        # is the minimum of running times on all machines the task runs on, but
        # we don't really want a task to run on multiple machines anyway - that
        # would be redundant.)
        runningTime = tasks[taskIdx].getRunningTime(machines[machineIdx])
        taskTakesItsRunningTimeOnAssignedMachine =\
          runningTimes[taskIdx] >= (runningTime * assignments[taskIdx][machineIdx])
        solver += taskTakesItsRunningTimeOnAssignedMachine

    # As noted above, we only care about the finishing time of the root tasks,
    # which we added as fake roots to each query.  So everyone else gets
    # coefficient 0 in the objective.
    entersObjective = [1 if tasks[taskIdx] in fakeRoots else 0 for taskIdx in xrange(numTasks)]
    objective = sum(entersObjective[taskIdx] * startingTime for taskIdx, startingTime in enumerate(startingTimes))\
                + sum(entersObjective[taskIdx] * runningTime for taskIdx, runningTime in enumerate(runningTimes))

    # Now solve the problem.
    solution = solver.minimize(objective=objective)

    LOG.debug("Minimum total finishing time in solution: %f" % solution.objective)
    for taskIdx in xrange(numTasks):
      LOG.debug("Solution for task %d: Start at %f, run for %f" % (taskIdx, solution[startingTimes[taskIdx]], solution[runningTimes[taskIdx]]))
    LOG.debug("Finishes-after-starts relationships: %s" % [[solution[finishesAfterStarts[taskBIdx][taskAIdx]] for taskBIdx in xrange(numTasks)] for taskAIdx in xrange(numTasks)])

    # Now turn the solution into a schedule.
    scheduledTasks = []
    for taskIdx in xrange(numTasks):
      task = tasks[taskIdx]
      # Only real tasks (not fake ones we added to the problem) and only tasks
      # that are not already running need to be scheduled.
      if task in originalTasks and not preexistingAssignments.has_key(task.getId()):
        taskRow = assignments[taskIdx]
        assignedMachineIdx = argmax(lambda machineIdx: solution[taskRow[machineIdx]], xrange(numMachines))
        LOG.debug("Assigned task %d starting at %f to machine %d" % (taskIdx, solution[startingTimes[taskIdx]], assignedMachineIdx))
        scheduledTasks.append(ScheduledTask(tasks[taskIdx], machines[assignedMachineIdx], solution[startingTimes[taskIdx]] + currentTime))

    return Schedule(scheduledTasks)

class TestOnlineGreedyScheduler(unittest.TestCase):
  def test_initialSchedule_simple(self):
    """
    The scheduler is asked for a schedule when no tasks are currently running
    and there are two queries in the queue.  Query 0 has 1 job with 1 task that
    will take 1000 ticks.  Query 1 has 1 job with 1 task that will take 200
    ticks.  There is 1 machine.  The scheduler should schedule query 1's task
    and then query 0's task.
    """
    machines = [Machine(0)]
    configuration = SystemConfiguration(machines)
    query0Task0 = scheduling.Task(0, {machines[0]: 1000})
    query0 = Query(0, [JobDag(JobNode(Job(0, [query0Task0], 1), []))])
    query1Task0 = scheduling.Task(1, {machines[0]: 200})
    query1 = Query(1, [JobDag(JobNode(Job(1, [query1Task0], 1), []))])
    queue = [query0, query1]
    systemState = SystemState(configuration, 0, queue, [], [])

    scheduler = OnlineGreedyScheduler()
    schedule = scheduler.handleNewQuery(systemState)

    self.assertTrue(
      schedule.approxEquals(
        Schedule([
          ScheduledTask(query1Task0, machines[0], 0),
          ScheduledTask(query0Task0, machines[0], 200)]),
        EPSILON
      ),
      "actual=%s" % schedule
    )

  def test_initialSchedule_2machines(self):
    """
    The scheduler is asked for a schedule when no tasks are currently running
    and there are two queries in the queue.  Query 0 has 1 job with 1 task,
    which will take 200 ticks on machine 0 and 300 ticks on machine 1.  Query 1
    has 1 job with 1 task, which will take 300 ticks on machine 0 and 200 ticks
    on machine 1.

    The scheduler should schedule both tasks from the start, on different
    machines.
    """
    machines = [Machine(0), Machine(1)]
    configuration = SystemConfiguration(machines)
    query0Task0 = scheduling.Task(0, {machines[0]: 200, machines[1]: 300})
    query0 = Query(0, [JobDag(JobNode(Job(0, [query0Task0], 1), []))])
    query1Task0 = scheduling.Task(0, {machines[0]: 300, machines[1]: 200})
    query1 = Query(1, [JobDag(JobNode(Job(1, [query1Task0], 1), []))])
    queue = [query0, query1]
    systemState = SystemState(configuration, 0, queue, [], [])

    scheduler = OnlineGreedyScheduler()
    schedule = scheduler.handleNewQuery(systemState)

    self.assertTrue(
      schedule.approxEquals(
        Schedule([
          ScheduledTask(query0Task0, machines[0], 0),
          ScheduledTask(query1Task0, machines[1], 0)]),
        EPSILON
      ),
      "actual=%s" % schedule
    )

  def test_initialSchedule_2machines_2tasks(self):
    """
    The scheduler is asked for a schedule when no tasks are currently running
    and there are two queries in the queue.  Query 0 has 1 job with 2 tasks, one
    of which will take 200 ticks on any machine, and the other of which will
    take 1200 ticks on any machine.  Query 1 has 1 job with 2 tasks, both of
    which take 1000 ticks on any machine.  There are 2 machines.  All values
    are perturbed slightly so that there is a unique best solution.

    The scheduler should schedule query 1's tasks and then query 0's tasks,
    since this will minimize average finishing time.
    """
    machines = [Machine(0), Machine(1)]
    configuration = SystemConfiguration(machines)
    query0Task0 = scheduling.Task(0, {machines[0]: 200, machines[1]: 201})
    query0Task1 = scheduling.Task(1, {machines[0]: 1201, machines[1]: 1200})
    query0 = Query(0, [JobDag(JobNode(Job(0, [query0Task0, query0Task1], 2), []))])
    query1Task0 = scheduling.Task(2, {machines[0]: 1000, machines[1]: 1001})
    query1Task1 = scheduling.Task(3, {machines[0]: 1001, machines[1]: 1000})
    query1 = Query(1, [JobDag(JobNode(Job(1, [query1Task0, query1Task1], 2), []))])
    queue = [query0, query1]
    systemState = SystemState(configuration, 0, queue, [], [])

    scheduler = OnlineGreedyScheduler()
    schedule = scheduler.handleNewQuery(systemState)

    self.assertTrue(
      schedule.approxEquals(
        Schedule([
          ScheduledTask(query1Task0, machines[0], 0),
          ScheduledTask(query1Task1, machines[1], 0),
          ScheduledTask(query0Task0, machines[0], 1000),
          ScheduledTask(query0Task1, machines[1], 1000)]),
        EPSILON
      ),
      "actual=%s" % schedule
    )

  def test_midstreamSchedule_taskAlreadyRunning(self):
    """
    There is 1 machine, and a task is running on it for the next 200 ticks.
    Ensure the scheduler doesn't schedule anything on it until the existing
    task is done.

    Note: In this test, the already-running task has no dependency relationships
    with other tasks that might be scheduled.
    """
    machines = [Machine(0)]
    configuration = SystemConfiguration(machines)
    task = scheduling.Task(0, {machines[0]: 300})
    query = Query(0, [JobDag(JobNode(Job(0, [task], 1), []))])
    runningTask = scheduling.Task(1, {machines[0]: 1000})
    runningQuery = Query(1, [JobDag(JobNode(Job(1, [runningTask], 1), []))])
    queue = [query, runningQuery]
    systemState = SystemState(configuration, 0, queue, [RunningTask(runningTask, machines[0], 200)], [])

    scheduler = OnlineGreedyScheduler()
    schedule = scheduler.handleNewQuery(systemState)

    self.assertTrue(
      schedule.approxEquals(
        Schedule([
          ScheduledTask(task, machines[0], 200)
        ]),
        EPSILON
      ),
      "actual=%s" % schedule
    )

  def test_midstreamSchedule_taskAlreadyFinished(self):
    """
    A query in the queue has 1 task that has already finished.  Ensure this
    task is ignored properly.  In particular, it should not run, and it should
    not be treated as a dependency for the query.
    """
    machines = [Machine(0)]
    configuration = SystemConfiguration(machines)
    task = scheduling.Task(0, {machines[0]: 300})
    completedTask = scheduling.Task(1, {machines[0]: 1000})
    query = Query(0, [JobDag(JobNode(Job(0, [task, completedTask], 2), []))])
    queue = [query]
    systemState = SystemState(configuration, 0, queue, [], [completedTask])

    scheduler = OnlineGreedyScheduler()
    schedule = scheduler.handleNewQuery(systemState)

    self.assertTrue(
      schedule.approxEquals(
        Schedule([
          ScheduledTask(task, machines[0], 0)
        ]),
        EPSILON
      ),
      "actual=%s" % schedule
    )

  def test_midstreamSchedule_nonzeroTime(self):
    """
    The current time is nonzero.  Ensure the scheduler produces a schedule that
    starts at the current time (rather than at time 0, for example).  The
    other setup is arbitrary.
    """
    machines = [Machine(0)]
    configuration = SystemConfiguration(machines)
    task = scheduling.Task(0, {machines[0]: 1000})
    query = Query(0, [JobDag(JobNode(Job(0, [task], 1), []))])
    queue = [query]
    systemState = SystemState(configuration, 100, queue, [], [])

    scheduler = OnlineGreedyScheduler()
    schedule = scheduler.handleNewQuery(systemState)

    self.assertTrue(
      schedule.approxEquals(
        Schedule([
          ScheduledTask(task, machines[0], 100)]),
        EPSILON
      ),
      "actual=%s" % schedule
    )

if __name__ == '__main__':
  unittest.main()