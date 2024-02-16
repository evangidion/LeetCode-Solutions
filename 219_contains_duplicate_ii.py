'''

Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

'''

from typing import List

class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        h = {}
        for i in range(len(nums)):
            if nums[i] in h:
                if abs(i - h[nums[i]]) <= k:
                    return True
                h[nums[i]] = i
            else:
                h[nums[i]] = i
        return False