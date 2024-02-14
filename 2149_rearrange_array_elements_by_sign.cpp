/*

You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should rearrange the elements of nums such that the modified array follows the given conditions:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

*/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
        for(int i = 0; i < pos.size(); i++) {
            res.push_back(pos[i]);
            res.push_back(neg[i]);
        }
        return res;
    }
};