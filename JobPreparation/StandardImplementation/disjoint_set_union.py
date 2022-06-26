import heapq
from typing import List

class DSNode:
    def __init__(self, data = None):
        self.parent = self
        self.rank = 0
        self.data = data

class DS:
    def __init__(self, start = 0, end=0):
        self.nodes = dict()
        self.total_set = end-start

        for data in range(start, end):
            self.nodes[data] = DSNode(data)
    
    def make_set(self, data):
        self.nodes[data] = DSNode(data)
    
    def find_set(self, node):
        if node.parent != node:
            node.parent = self.find_set(node.parent)
        
        return node.parent

    def merge_node(self, a, b):
        b.parent = a
        a.rank = max(a.rank, b.rank + 1)
    
    def union(self, data1, data2):
        parent_1 = self.find_set(self.nodes[data1])
        parent_2 = self.find_set(self.nodes[data2])
        
        if parent_1 == parent_2:
            return self.total_set
        
        if parent_1.rank > parent_2.rank:
            self.merge_node(parent_1, parent_2)
        else:
            self.merge_node(parent_2, parent_1)
        
        self.total_set -= 1
        
        return self.total_set




#Another implementation of disjoint set

class UnionFind:

    def __init__(self, size):
        self.group = [group_id for group_id in range(size)]
        self.rank = [0] * size

    def find(self, person):
        if self.group[person] != person:
            self.group[person] = self.find(self.group[person])
        return self.group[person]

    def union(self, a, b):
        """
            return: true if a and b are not connected before
                otherwise, connect a with b and then return false
        """
        group_a = self.find(a)
        group_b = self.find(b)
        is_merged = False
        if group_a == group_b:
            return is_merged

        is_merged = True
        # Merge the lower-rank group into the higher-rank group.
        if self.rank[group_a] > self.rank[group_b]:
            self.group[group_b] = group_a
        elif self.rank[group_a] < self.rank[group_b]:
            self.group[group_a] = group_b
        else:
            self.group[group_a] = group_b
            self.rank[group_b] += 1

        return is_merged


class Solution:
    def earliestAcq(self, logs: List[List[int]], n: int) -> int:
        queue = [tuple(log) for log in logs]
        
        heapq.heapify(queue)
        ds = DS(end = n)
        
        while queue:
            log = heapq.heappop(queue)
            total_set = ds.union(log[1], log[2])
            if total_set == 1:
                return log[0]
        
        return -1

# class Solution:
#     def earliestAcq(self, logs: List[List[int]], n: int) -> int:
#         # First, we need to sort the events in chronological order.
#         logs.sort(key = lambda x: x[0])

#         uf = UnionFind(n)
#         # Initially, we treat each individual as a separate group.
#         group_cnt = n

#         # We merge the groups along the way.
#         for timestamp, friend_a, friend_b in logs:
#             if uf.union(friend_a, friend_b):
#                 group_cnt -= 1

#             # The moment when all individuals are connected to each other.
#             if group_cnt == 1:
#                 return timestamp

#         # There are still more than one groups left,
#         #  i.e. not everyone is connected.
#         return -1

s = Solution()
ans = s.earliestAcq([[20190101,0,1],[20190104,3,4],[20190107,2,3],[20190211,1,5],[20190224,2,4],[20190301,0,3],[20190312,1,2],[20190322,4,5]], 6)
print(ans)