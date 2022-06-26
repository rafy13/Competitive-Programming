from typing import List
from collections import defaultdict, deque


class Point:
  def __init__(self, row: int, column: int) -> None:
    self.row = row
    self.column = column
  
  def __eq__(self, other: object) -> bool:
      return isinstance(other, Point) and self.row == other.row and self.column == other.column
  
  def __hash__(self) -> int:
      return hash(tuple([self.row, self.column]))
    
  def get_neighbors(self):
    neighbors = [
      Point(self.row+1, self.column),
      Point(self.row-1, self.column),
      Point(self.row, self.column+1),
      Point(self.row, self.column-1)
    ]

    return neighbors
  
  def is_valid(self, max_row, max_column):
    return 0 <= self.row < max_row and 0 <= self.column < max_column


class State:
  def __init__(self, point: int, remaining_obstacles) -> None:
      self.point = point
      self.remaining_obstacles = remaining_obstacles
  
  def __eq__(self, o: object) -> bool:
      return isinstance(o, State) and o.point == self.point and o.remaining_obstacles == self.remaining_obstacles
  
  def __hash__(self) -> int:
      return hash(tuple([self.point, self.remaining_obstacles]))


class ShortestPathFinder:
  def __init__(self, grid: List[List[int]], k: int) -> None:
    self.rows = len(grid)
    self.columns = len(grid[0])
    self.target = Point(self.rows-1, self.columns-1)
    self.grid = grid
    self.total_obstacles = k
  
  def shortestPath(self):
    state = State(Point(0, 0), self.total_obstacles)
    queue = deque([(0, state)])
    seen = defaultdict(lambda: -1)
    seen[Point(0, 0)] = 0
    
    while queue:
      steps, state = queue.popleft()
      point: Point = state.point
      remaining_obstacles = state.remaining_obstacles

      if remaining_obstacles < seen[point]:
        continue

      if point == self.target:
        return steps
      
      for new_point in point.get_neighbors():
        if new_point.is_valid(self.rows, self.columns):
          temp_obstacles = remaining_obstacles - self.grid[new_point.row][new_point.column]
          new_state = State(new_point, temp_obstacles)
    
          if temp_obstacles >= 0 and seen[new_point] < temp_obstacles:
            seen[new_point] = temp_obstacles
            queue.append((steps+1, new_state))

    return -1



class Solution:
    def shortestPath(self, grid: List[List[int]], k: int) -> int:
      path_finder = ShortestPathFinder(grid, k)

      return path_finder.shortestPath()


