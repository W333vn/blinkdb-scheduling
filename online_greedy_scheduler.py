"""
Online queue-greedy scheduling algorithm for BlinkDB simulations.

@author: Henry Milner (henrym@eecs.berkeley.edu)
"""
import unittest
from collections import defaultdict

import Mistral
from Numberjack import *

from scheduling import *
import scheduling

def addFakeRoot(fakeRootTask, originalJobDag):
  """
  Add a job depending on @fakeRootTask as the new root of @originalJobDag.
  """
  return JobDag(JobNode(Job(fakeRootTask), [originalJobDag.getRoot()]))

def flattenToTasks(jobDag):
  return flattenToTasksUnderNode(jobDag.getRoot())

def flattenToTasksUnderNode(jobNode):
  tasks = jobNode.getJob().getTasks()
  for child in jobNode.getChildren():
    tasks += flattenToTasksUnderNode(child)
  return tasks

LARGE_NUMBER = 2**31

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

    machines = newSystemState.getConfiguration().getMachines()
    numMachines = len(machines)

    tasks = []
    fakeRootTasks = set()
    for query in newSystemState.getQueue():
      #HACK(henry): We introduce a fake root job that depends on the real root
      # and whose task takes 0 time.  Then our objective function can care only
      # about the finishing time of the fake task.  This is equivalent to, but
      # easier than, depending on the max finishing time of any task in a job.
      fakeRoot = scheduling.Task(Dataset(defaultdict(int)))
      fakeRootTasks += fakeRoot
      tasks += flattenToTasks(addFakeRoot(fakeRoot, query.getExecutionAlternatives()[0]))
    numTasks = len(tasks)

    model = Model()

    # Main problem variables.  Some others are introduced as needed when
    # constraints are created.
    assignments = Matrix(numMachines, numTasks) # Machines are columns, tasks are rows
    startingTimes = VarArray(numTasks)
    runningTimes = VarArray(numTasks)

    # As noted above, we only care about the finishing time of the root tasks,
    # so everyone else gets coefficient 0 in the objective.
    objective = Minimize(Sum(
      startingTimes + runningTimes,
      [1 if tasks[index] in fakeRootTasks else 0 for index in xrange(numTasks)]
    ))
    model.add(objective)

    # Encode the requirement that each machine runs only 1 task at a time.
    for machineIdx in xrange(numMachines):
      for taskAIdx in xrange(numTasks):
        for taskBIdx in xrange(numTasks):
          # This variable is
          taskAFinishesBeforeTaskBStarts = Variable() #FIXME: Should be {0, 1}
          model.add(
            (startingTimes[taskAIdx] + runningTimes[taskAIdx] - startingTimes[taskBIdx])
            <= taskAFinishesBeforeTaskBStarts * LARGE_NUMBER)

          taskBFinishesBeforeTaskAStarts = Variable()
          model.add(
            (startingTimes[taskBIdx] + runningTimes[taskBIdx] - startingTimes[taskAIdx])
            <= taskBFinishesBeforeTaskAStarts * LARGE_NUMBER)

          noOverlapBetweenAAndB = \
            assignments[taskAIdx][machineIdx]\
            + assignments[taskBIdx][machineIdx]\
            + taskAFinishesBeforeTaskBStarts\
            + taskBFinishesBeforeTaskAStarts\
            <= 4
          model.add(noOverlapBetweenAAndB)

    # Encode dependencies.
    for taskIdx in xrange(numTasks):
      for dependencyTaskIdx in getDependencies(tasks[taskIdx]):
        taskStartsAfterDependency = startingTimes[taskIdx] >= startingTimes[dependencyTaskIdx] + runningTimes[dependencyTaskIdx]
        model.add(taskStartsAfterDependency)

    # Encode costs.
    for machineIdx in xrange(numMachines):
      for taskIdx in xrange(numTasks):
        runningTime = tasks[taskIdx].get
        taskTakesItsRunningTimeOnAssignedMachine = runningTimes[taskIdx] >= assignments[taskIdx][machineIdx] * tasks[taskIdx]

    solver = Mistral.Solver(model)
    solver.setVerbosity(1)
    solver.solve()

    tasksByTime = {}
    for taskIdx, startingTime in enumerate(startingTimes):
      task = tasks[taskIdx]
      if task not in fakeRootTasks:
        tasksByTime[startingTime] = tasks[taskIdx]
    return Schedule(tasksByTime)


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
    query0Task0 = scheduling.Task(Dataset({machines[0]: 1000}))
    query0 = Query([JobDag(JobNode(Job([query0Task0], 1), []))])
    query1Task0 = scheduling.Task(Dataset({machines[0]: 200}))
    query1 = Query([JobDag(JobNode(Job([query1Task0], 1), []))])
    queue = [query0, query1]
    systemState = SystemState(configuration, 0, queue, [], [])

    scheduler = OnlineGreedyScheduler()
    schedule = scheduler.handleNewQuery(systemState)

    self.assertEqual(schedule.getScheduledTasksForTime(0), [ScheduledTask(query1Task0)])
    self.assertEqual(schedule.getScheduledTasksForTime(200), [ScheduledTask(query0Task0)])

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
    query0Task0 = scheduling.Task(Dataset({machines[0]: 200, machines[1]: 300}))
    query0 = Query([JobDag(JobNode(Job([query0Task0], 1), []))])
    query1Task0 = scheduling.Task(Dataset({machines[0]: 300, machines[1]: 200}))
    query1 = Query([JobDag(JobNode(Job([query1Task0], 1), []))])
    queue = [query0, query1]
    systemState = SystemState(configuration, 0, queue, [], [])

    scheduler = OnlineGreedyScheduler()
    schedule = scheduler.handleNewQuery(systemState)

    self.assertEqual(
      schedule.getScheduledTasksForTime(0),
      [
        ScheduledTask(query0Task0, machines[0]),
        ScheduledTask(query1Task0, machines[1])
      ])

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
    query0Task0 = scheduling.Task(Dataset({machines[0]: 200, machines[1]: 201}))
    query0Task1 = scheduling.Task(Dataset({machines[0]: 1201, machines[1]: 1200}))
    query0 = Query([JobDag(JobNode(Job([query0Task0, query0Task1], 2), []))])
    query1Task0 = scheduling.Task(Dataset({machines[0]: 1000, machines[1]: 1001}))
    query1Task1 = scheduling.Task(Dataset({machines[0]: 1001, machines[1]: 1000}))
    query1 = Query([JobDag(JobNode(Job([query1Task0, query1Task1], 2), []))])
    queue = [query0, query1]
    systemState = SystemState(configuration, 0, queue, [], [])

    scheduler = OnlineGreedyScheduler()
    schedule = scheduler.handleNewQuery(systemState)

    self.assertEqual(
      schedule.getScheduledTasksForTime(0),
      [
        ScheduledTask(query1Task0, machines[0]),
        ScheduledTask(query1Task1, machines[1])
      ])
    self.assertEqual(
      schedule.getScheduledTasksForTime(1000),
      [
        ScheduledTask(query0Task0, machines[0]),
        ScheduledTask(query0Task1, machines[1])
      ])

if __name__ == '__main__':
  unittest.main()