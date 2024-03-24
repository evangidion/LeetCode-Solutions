'''

You are given an array nums consisting of positive integers.

Return the total frequencies of elements in nums such that those elements all have the maximum frequency.

The frequency of an element is the number of occurrences of that element in the array.

'''

from typing import List

class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        max_freq = 0
        h = {}
        res = 0
        for num in nums:
            if num in h:
                h[num] += 1
            else:
                h[num] = 1
            if h[num] > max_freq:
                max_freq = h[num]
        for val in h.values():
            if val == max_freq:
                res += val
        return res