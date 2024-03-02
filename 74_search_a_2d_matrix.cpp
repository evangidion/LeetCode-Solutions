/*

You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size() - 1;
        for(int i = 0; i < m; i++) {
            int s = 0;
            int e = n;
            while(s <= e) {
                int m = s + (e - s) / 2;
                if(matrix[i][m] == target) return true;
                else if(matrix[i][m] < target) s = m + 1;
                else e = m - 1;
            }
        }
        return false;
    }
};