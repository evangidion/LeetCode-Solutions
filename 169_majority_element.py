'''

Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

'''

from typing import List

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums.sort()
        num = nums[0]
        maxx = 1
        for i in range(1, len(nums)):
            if num == nums[i]:
                maxx += 1
                if maxx >= len(nums) / 2:
                    return num
            else:
                num = nums[i]
                maxx = 1
        return num

        # h = {}
        # for i in range(len(nums)):
        #     if nums[i] in h:
        #         h[nums[i]] += 1
        #     else:
        #         h[nums[i]] = 0
        # maxx = 0
        # res = nums[0]
        # for i in h:
        #     if h[i] > maxx:
        #         maxx = h[i]
        #         res = i
        # return res