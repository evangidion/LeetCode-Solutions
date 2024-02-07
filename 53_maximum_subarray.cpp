/*

Given an integer array nums, find the subarray with the largest sum, and return its sum.

*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        res[0] = nums[0];
        for(int i = 1; i < n; i++) res[i] = max(nums[i], nums[i] + res[i - 1]);
        return *max_element(res.begin(), res.end());
    }
};