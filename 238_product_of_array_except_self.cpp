/*  

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int begin = 1;
        int last = 1;
        int n = nums.size();
        vector<int> answer(n, 1);
        for(int i = 0; i < n; i++) {
            answer[i] *= begin;
            begin *= nums[i];
            answer[n - 1 - i] *= last;
            last *= nums[n - 1 - i];
        }
        return answer;
    }
};