/*

An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.

You are also given three integers sr, sc, and color. You should perform a flood fill on the image starting from the pixel image[sr][sc].

To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with color.

Return the modified image after performing the flood fill.

*/

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int original = image[sr][sc];
        floodFillHelper(image, original, sr, sc, color);
        return image;
    }

    void floodFillHelper(vector<vector<int>>& image, int original, int sr, int sc, int color) {
        if(sr >= 0 && sr <= image.size() - 1 && sc >= 0 && sc <= image[0].size() - 1 && image[sr][sc] == original && image[sr][sc] != color) {
            image[sr][sc] = color;
            floodFillHelper(image, original, sr - 1, sc, color);
            floodFillHelper(image, original, sr + 1, sc, color);
            floodFillHelper(image, original, sr, sc - 1, color);
            floodFillHelper(image, original, sr, sc + 1, color);
        }
    }
};