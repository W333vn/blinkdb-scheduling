"""
Online queue-greedy scheduling algorithm for BlinkDB simulations.

@author: Henry Milner (henrym@eecs.berkeley.edu)
"""
import unittest
from collections import defaultdict

from zibopt import scip

from scheduling import *
import scheduling
from util import *

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

# Note: I ran into problems when I made this number too large (e.g. 2**31).
# Since this number has to be bigger than any task running time, this means
# we can't handle very short time quanta for very long running tasks.
LARGE_NUMBER = 2**20 #FIXME

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
    #  - No currently running tasks or queries
    #  - No alternative datasets (numRequiredTasks = len(tasks))

    # The set of tasks in our original input, before we do any tricky
    # modifications to facilitate solving our optimization problem.
    originalTasks = frozenset(flatten(tasksInQuery(query) for query in newSystemState.getQueue()))

    systemState = SystemState(
      newSystemState.getConfiguration(),
      newSystemState.getCurrentTime(),
      [addFakeRoots(query) for query in newSystemState.getQueue()],
      newSystemState.getRunningTasks())

    machines = systemState.getConfiguration().getMachines()
    numMachines = len(machines)

    tasks = list(flatten(tasksInQuery(query) for query in systemState.getQueue()))
    taskIndices = {task:index for index, task in enumerate(tasks)}
    numTasks = len(tasks)

    # The JobNode associated with each task.  This allows fast computation of
    # dependencies between tasks.
    tasksToNodes = unionDicts(mapTasksToNodes(query) for query in systemState.getQueue())

    solver = scip.solver(quiet=False)

    # Variables:

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

    # finishesAfter[A][B] is true (i.e. 1) if task A finishes after task B
    # starts.  The point of this is that A and B run at the same time iff
    # finishesAfter[A][B] and finishesAfter[B][A] are both true.
    finishesAfter = [[solver.variable(scip.BINARY) for taskIdxB in xrange(numTasks)]
                     for taskIdxA in xrange(numTasks)]

    # Encode the requirement that each task is assigned at least once.
    for taskIdx in xrange(numTasks):
      task = tasks[taskIdx]
      solver += sum(assignments[taskIdx]) >= 1

    # Encode the requirement that each machine runs only 1 task at a time.
    for taskAIdx in xrange(numTasks):
      for taskBIdx in xrange(taskAIdx):
        # If A finishes after B starts, then the LHS here is positive and
        # finishesAfter[A][B] must be 1, in which case the constraint is
        # satisfied because the RHS is very large.  Otherwise,
        # finishesAfter[A][B] is free to be 0.
        solver += \
          (startingTimes[taskAIdx] + runningTimes[taskAIdx] - startingTimes[taskBIdx])\
            <= LARGE_NUMBER * finishesAfter[taskAIdx][taskBIdx]

        solver += \
          (startingTimes[taskBIdx] + runningTimes[taskBIdx] - startingTimes[taskAIdx])\
            <= LARGE_NUMBER * finishesAfter[taskBIdx][taskAIdx]

        for machineIdx in xrange(numMachines):
          # It can't be the case that A and B are both assigned to this machine
          # and they overlap in time.
          print "%d and %d can't be assigned to machine %d and overlap" % (taskAIdx, taskBIdx, machineIdx)
          noOverlapBetweenAAndB = \
            (assignments[taskAIdx][machineIdx]
              + assignments[taskBIdx][machineIdx]
              + finishesAfter[taskAIdx][taskBIdx]
              + finishesAfter[taskBIdx][taskAIdx])\
            <= 3
          solver += noOverlapBetweenAAndB
        pass

    # Encode dependencies.
    for taskIdx in xrange(numTasks):
      dependentJobNodes = tasksToNodes[tasks[taskIdx]].getChildren()
      dependentTasks = flatten(jobNode.getJob().getTasks() for jobNode in dependentJobNodes)
      for dependencyTaskIdx in (taskIndices[task] for task in dependentTasks):
        print "Task %d depends on %d" % (taskIdx, dependencyTaskIdx)
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
    entersObjective = [0 if tasks[taskIdx] in originalTasks else 1 for taskIdx in xrange(numTasks)]
    objective = sum(entersObjective[taskIdx] * startingTime for taskIdx, startingTime in enumerate(startingTimes))\
                + sum(entersObjective[taskIdx] * runningTime for taskIdx, runningTime in enumerate(runningTimes))

    # Now solve the problem.
    solution = solver.minimize(objective=objective)

    print "Minimum total finishing time in solution: %f" % solution.objective
    for taskIdx in xrange(numTasks):
      print "Solution for task %d: Start at %f, run for %f" % (taskIdx, solution[startingTimes[taskIdx]], solution[runningTimes[taskIdx]])
    print "Finishes-after relationships: %s" % [[solution[finishesAfter[taskBIdx][taskAIdx]] for taskBIdx in xrange(numTasks)] for taskAIdx in xrange(numTasks)]

    # Now turn the solution into a schedule.
    scheduledTasks = []
    for taskIdx in xrange(numTasks):
      task = tasks[taskIdx]
      if task in originalTasks:
        taskRow = assignments[taskIdx]
        assignedMachineIdx = argmax(lambda machineIdx: solution[taskRow[machineIdx]], xrange(numMachines))
        print "Assigned task %d starting at %f to machine %d" % (taskIdx, solution[startingTimes[taskIdx]], assignedMachineIdx)
        scheduledTasks.append(ScheduledTask(tasks[taskIdx], machines[assignedMachineIdx], solution[startingTimes[taskIdx]]))

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
    systemState = SystemState(configuration, 0, queue, [])

    scheduler = OnlineGreedyScheduler()
    schedule = scheduler.handleNewQuery(systemState)

    self.assertTrue(
      schedule.approxEquals(
        Schedule([
          ScheduledTask(query1Task0, machines[0], 0),
          ScheduledTask(query0Task0, machines[0], 200)]),
        EPSILON))
#
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
    systemState = SystemState(configuration, 0, queue, [])

    scheduler = OnlineGreedyScheduler()
    schedule = scheduler.handleNewQuery(systemState)

    self.assertTrue(
      schedule.approxEquals(
        Schedule([
          ScheduledTask(query0Task0, machines[0], 0),
          ScheduledTask(query1Task0, machines[1], 0)]),
        EPSILON))

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
    systemState = SystemState(configuration, 0, queue, [])

    scheduler = OnlineGreedyScheduler()
    schedule = scheduler.handleNewQuery(systemState)

    self.assertTrue(
      schedule.approxEquals(
        Schedule([
          ScheduledTask(query1Task0, machines[0], 0),
          ScheduledTask(query1Task1, machines[1], 0),
          ScheduledTask(query0Task0, machines[0], 1000),
          ScheduledTask(query0Task1, machines[1], 1000)]),
        EPSILON))

if __name__ == '__main__':
  unittest.main()