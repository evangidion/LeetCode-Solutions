'''
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

'''

from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        h = {}
        res = []
        for i in range(len(nums)):
            if target - nums[i] in h:
                res.append(h[target - nums[i]])
                res.append(i)
                break
            h[nums[i]] = i
        return res
    
result = Solution()
print(result.twoSum([2, 7, 6, 4, 5, 19], 9))