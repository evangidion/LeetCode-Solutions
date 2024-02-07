/*

Given an integer array nums, find a subarray that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxx = nums[0], imax = nums[0], imin = nums[0];
        for(int i = 1; i < n; i++) {
            if(nums[i] < 0) swap(imax, imin);
            imax = max(nums[i] * imax, nums[i]);
            imin = min(nums[i] * imin, nums[i]);
            maxx = max(maxx, imax);
        }
        return maxx;
    }
};