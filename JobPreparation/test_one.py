'''
[1,1,2,3]
[1] ->[1,1]

            [1,2,3]
            [1,2]
    -> [1]
        [1,3]
        [1]


{
    1: 2,
    2: 1,
    3: 1
}

'''

from collections import Counter


class NumSet:
    def __init__(self, nums):
        self.nums = nums
        self.counter = Counter(nums)
        self.nums_set = list(set(nums))
        self.N = len(self.nums_set)
        self.results = []
    

    def calculate_power_sets(self, pos, current_set):
        if pos >= self.N:
            if len(current_set) > 0:
                self.results.append(current_set[:])
            return
        
        current_num = self.nums_set[pos]

        for count in range(self.counter[current_num]+1):
            self.calculate_power_sets(pos+1, current_set[:] + [current_num]*count)

    def find_power_set(self):
        self.calculate_power_sets(0, [])

        return self.results



s = NumSet([1, 1, 2, 3])

print(s.find_power_set())