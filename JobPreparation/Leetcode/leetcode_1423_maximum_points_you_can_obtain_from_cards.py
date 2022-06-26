import itertools
from typing import List


class Solution:
    def maxScore(self, cardPoints: List[int], k: int) -> int:
        cum_sum = list(itertools.accumulate(cardPoints))
        n = len(cardPoints)
        right_sum = 0
        ans = 0
        
        for i in range(k+1):
            left_sum = cum_sum[k-i-1] if i < k else 0
            ans = max(left_sum+right_sum, ans)
            right_sum += cardPoints[n-i-1]
        return ans
'''
class Solution:
    def maxScore(self, cardPoints: list[int], k: int) -> int:
        left = 0
        right = k
        total = ans = sum(cardPoints[left:right])

        while right > 0:
            left -= 1
            right -= 1
            total = total + cardPoints[left] - cardPoints[right]
            if total > ans:
                ans = total

        return ans
'''
print(Solution().maxScore([1,2,3,4,5,6,1], 3))
