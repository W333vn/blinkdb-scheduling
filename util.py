"""
Utilities for scheduling.

@author: Henry Milner (henrym@eecs.berkeley.edu)
"""
import unittest

EPSILON = 2**-10

NIL = [].__iter__()

def flatten(deepList):
  """
  Simple utility function to flatten a 2D list (or generator) into a 1D
  generator.
  """
  return (item for shallowList in deepList for item in shallowList)

def flatMap(mapper, originalList):
  """
  Standard flatMap for iterables.
  """
  return (item for originalItem in originalList for item in mapper(originalItem))

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

def reprHelper(obj):
  return __ReprHelper(type(obj))

class __ReprHelper(object):
  def __init__(self, clazz):
    self.clazz = clazz
    self.items = {}

  def add(self, name, value):
    self.items[name] = value
    return self

  def build(self):
    return repr(self)

  def __repr__(self):
    return "{%s %s}" % (self.clazz.__name__, self.items)

class TestOnlineGreedyScheduler(unittest.TestCase):
  def test_flatten(self):
    originalList = [[1, 2, 3], [4, 5], [6], [], [7, 8]]
    self.assertEqual([1, 2, 3, 4, 5, 6, 7, 8], list(flatten(originalList)))

  def test_flatMap_asFlatten(self):
    originalList = [[1, 2, 3], [4, 5], [6], [], [7, 8]]
    self.assertEqual(list(flatten(originalList)), list(flatMap(lambda item: item, originalList)),
                     "flatMap with the identity function does the same thing as flatten")

  def test_flatMap_asFilter(self):
    originalList = [0, 1, 2, 3]
    self.assertEqual(
      filter(lambda item: item != 2, originalList),
      list(flatMap(lambda item: [item] if item != 2 else NIL, originalList)))

  def test_flatMap(self):
    originalList = [0, 1, 2, 3]
    self.assertEqual([0, 0, 1, 1, 2, 2, 3, 3], list(flatMap(lambda item: [item, item], originalList)))

if __name__ == '__main__':
  unittest.main()