/*

Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        res.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++) res.push_back(nums[i] + res[i - 1]);
        return res;
    }
};