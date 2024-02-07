'''

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

'''

from typing import List

class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        h = {}
        for i in range(len(nums)):
            if nums[i] in h:
                return True
            h[nums[i]] = 0
        return False
    
result = Solution()
print(result.containsDuplicate([1, 2, 3, 1]))