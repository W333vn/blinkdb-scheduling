"""
Offline scheduling algorithm for BlinkDB simulations.

@author: Henry Milner (henrym@eecs.berkeley.edu)
"""

from edu.berkeley.blinkdb.scheduling.scheduling import *
#TODO(henry): Also try SCIP.  Had difficulty compiling it with Numberjack.
import Mistral
from Numberjack import *

def buildModel(systemFutureState):
  #FIXME: Not implemented yet.
  numQueries = systemFutureState.getConfiguration().getQueries().len()
  numMachines = systemFutureState.getConfiguration().getMachines().len()
  numTasks = 0 #FIXME
  startTimes = VarArray(numTasks) #FIXME: Need to ensure these are continuous.
  runningTimes = VarArray(numTasks)
  taskDidRun = Matrix(numTasks, numMachines)

  model = Model()

  # Each row of taskDidRun sums to at least 1

  return None

class OfflineOptimalScheduler(OfflineScheduler):
  """
  Solves the offline scheduling problem exactly, under certain assumptions:
    -FIXME

  The solution is computed by solving a mixed integer program of size FIXME.
  """
  def __init__(self, systemFutureState):
    #FIXME: Solve MIP
    model = buildModel(systemFutureState)
    solver = Mistral.Solver(model)
    self.scheduledTasks = {}

  def handleNewQuery(self, newSystemState):
    # Lookup the schedule for the items in the queue and return it.
    tasksByTime = {}
    for query in newSystemState.getQueue():
      for scheduledTask in self.scheduledTasks[query]:
        time = scheduledTask.getStartTime()
        currentTasksForTime = tasksByTime.get(time, None)
        if currentTasksForTime is None:
          currentTasksForTime = []
        tasksByTime[time] = currentTasksForTime + scheduledTask
    return Schedule(tasksByTime)


def runExample():
  s = OfflineOptimalScheduler()

if __name__ == "__main__":
  runExample()