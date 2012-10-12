"""
Online queue-greedy scheduling algorithm for BlinkDB simulations.

@author: Henry Milner (henrym@eecs.berkeley.edu)
"""
import unittest

import Mistral
from Numberjack import *

from scheduling import *
import scheduling

class OnlineGreedyScheduler(Scheduler):
  def __init__(self):
    pass

  def handleNewQuery(self, newSystemState):
    # Greedily schedule enough tasks so that all queries in the queue will be
    # performed.
    tasksByTime = {}

    return Schedule(tasksByTime)

class TestOnlineGreedyScheduler(unittest.TestCase):
  def test_simpleInitialSchedule(self):
    """
    The scheduler is asked for a schedule when no tasks are currently running
    and there are two tasks in the queue.  Query 0 has 1 job with 1 task that
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

if __name__ == '__main__':
  unittest.main()