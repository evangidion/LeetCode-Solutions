/*

Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int s = 0; 
        int e = nums.size() - 1;
        for(int i = nums.size() - 1; i >= 0; i--) {
            if (abs(nums[e]) > abs(nums[s])) res[i] = nums[e] * nums[e--];
            else res[i] = nums[s] * nums[s++];
        }
        return res;
    }
};