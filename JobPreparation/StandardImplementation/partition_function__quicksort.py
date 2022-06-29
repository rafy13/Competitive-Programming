'''
Leetcode 215. Kth Largest Element in an Array
'''


import random
from typing import List

class Solution:
    # The partition function for quick select. Same partition function is used for quick sort
    def partition(self, nums, start, end):
        pivot = random.randint(start, end)
        nums[pivot], nums[end] = nums[end], nums[pivot]
        index = start
        for i in range(start, end):
            if nums[i] > nums[end]:
                nums[i], nums[index] = nums[index], nums[i]
                index+=1
        nums[index], nums[end] = nums[end], nums[index]
        
        return index
    
    def findKthLargest(self, nums: List[int], k: int, start = 0, end = -1) -> int:
        if end == -1:
            end = len(nums) - 1
        
        
        index = self.partition(nums, start, end)
        
        if index+1 == k:
            return nums[index]
        
        if index+1 < k:
            return self.findKthLargest(nums, k, index+1, end)
        
        return self.findKthLargest(nums, k, start, index-1)
    
    def sort(self, nums, start = 0, end = -1):
        if end == -1:
            end = len(nums) - 1
        
        if end - start < 1:
            return
        if end - start == 1:
            if nums[start] < nums[end]:
                nums[start], nums[end] = nums[end], nums[start]
        
        index = self.partition(nums, start, end)

        self.sort(nums, start, index-1)

        self.sort(nums, index+1, end)


s = Solution()

nums = [3,2,3,1,2,4,5,5,6]

s.sort(nums)

print(nums)