from typing import Any
from collections import Counter

class Count:
    def __init__(self, zeros=0, ones=0):
        self.zeros = zeros
        self.ones = ones


class BitCounter:
    def __init__(self, s: str):
        self.counter = Counter(s)
    
    def get_bit_count(self, bit: chr):
        return self.counter.get(bit, 0)


class MultiDimentionalList(list):
    def _build_multi_dimensional_list(self, current: int):
        if current == len(self.dimensions) - 1:
            return [self.fill_value] * self.dimensions[current]

        current_list = []

        for _ in range(self.dimensions[current]):
            current_list.append(self._build_multi_dimensional_list(current+1))
        
        return current_list

    def __init__(self, dimensions: list[int], fill_value: Any = None):
        self.dimensions = dimensions
        self.fill_value = fill_value

        super().__init__(self._build_multi_dimensional_list(0))


class MaxSubsetFinder:
    def __init__(self, ones_and_zeros):
        self.ones_and_zeros = ones_and_zeros
        self.max_count = MultiDimentionalList([self.ones_and_zeros.total_strs, self.ones_and_zeros.zeros+1, self.ones_and_zeros.ones+1], -1)
    
    def compute_max_subset(self, str_index, remaining_zeros, remaining_ones):
        if str_index == self.ones_and_zeros.total_strs:
            return 0


        if self.max_count[str_index][remaining_zeros][remaining_ones] != -1:
            return self.max_count[str_index][remaining_zeros][remaining_ones]
        
        self.max_count[str_index][remaining_zeros][remaining_ones] = self.compute_max_subset(str_index+1, remaining_zeros, remaining_ones)
    
        new_remaining_zeros = remaining_zeros - self.ones_and_zeros.bit_counts[str_index].zeros
        new_remaining_ones = remaining_ones - self.ones_and_zeros.bit_counts[str_index].ones
        
        if new_remaining_zeros >= 0 and new_remaining_ones >= 0:
            self.max_count[str_index][remaining_zeros][remaining_ones] = max(
                self.max_count[str_index][remaining_zeros][remaining_ones],
                1 + self.compute_max_subset(str_index+1, new_remaining_zeros, new_remaining_ones)
            )
        
        return self.max_count[str_index][remaining_zeros][remaining_ones]

    
    def get_max_subset(self):
        return self.compute_max_subset(0, self.ones_and_zeros.zeros, self.ones_and_zeros.ones)


class OnesAndZeros:
    def __init__(self, strs: list[str], m: int, n: int):
        self.strs = strs
        self.zeros = m
        self.ones = n
        self.total_strs = len(strs)
        self.bit_counts = []
        self.calculate_bit_counts()

    def calculate_bit_counts(self):
        for s in self.strs:
            counter = BitCounter(s)
            self.bit_counts.append(Count(counter.get_bit_count('0'), counter.get_bit_count('1')))



class Solution:
    def findMaxForm(self, strs: List[str], m: int, n: int) -> int:
        ones_and_zeros = OnesAndZeros(strs, m, n)
        subset_finder = MaxSubsetFinder(ones_and_zeros)
        return subset_finder.get_max_subset()
        
            