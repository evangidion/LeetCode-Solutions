/*

Given an m x n binary matrix mat, return the distance of the nearest 0 for each cell.

The distance between two adjacent cells is 1.

*/

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int, int>> q;
        for(int i = 0; i < mat.size(); i++) {
            for(int j = 0; j < mat[0].size(); j++) {
                if(mat[i][j] == 0) q.emplace(i, j);
                else mat[i][j] = -1;
            }
        }
        while(!q.empty()) {
            auto [row, col] = q.front();
            q.pop();
            if(row+1 >= 0 && row+1 < mat.size() && col >= 0 && col < mat[0].size() && mat[row+1][col] == -1) {
                mat[row+1][col] = mat[row][col] + 1;
                q.emplace(row+1, col);
            }
            if(row-1 >= 0 && row-1 < mat.size() && col >= 0 && col < mat[0].size() && mat[row-1][col] == -1) {
                mat[row-1][col] = mat[row][col] + 1;
                q.emplace(row-1, col);
            }   
            if(row >= 0 && row < mat.size() && col+1 >= 0 && col+1 < mat[0].size() && mat[row][col+1] == -1) {
                mat[row][col+1] = mat[row][col] + 1;
                q.emplace(row, col+1);
            }    
            if(row >= 0 && row < mat.size() && col-1 >= 0 && col-1 < mat[0].size() && mat[row][col-1] == -1) {
                mat[row][col-1] = mat[row][col] + 1;
                q.emplace(row, col-1);
            }    
        }
        return mat;
    }
};