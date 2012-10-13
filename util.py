"""
Utilities for scheduling.

@author: Henry Milner (henrym@eecs.berkeley.edu)
"""

NIL = [].__iter__()

def flatten(deepList):
  """
  Simple utility function to flatten a 2D list (or generator) into a 1D
  generator.
  """
  return (item for shallowList in deepList for item in shallowList)

def unionDicts(deepListOfDicts):
  """
  Flatten a list (or generator) of dictionaries into their union.
  """
  return {k:v for shallowDict in deepListOfDicts for (k, v) in shallowDict.iteritems()}

def argmax(func, args):
  maxVal = float('-infinity')
  maxArg = None
  for arg in args:
    val = func(arg)
    if val >= maxVal:
      maxVal = val
      maxArg = arg
  return maxArg