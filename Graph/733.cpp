class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initColor = image[sr][sc];
        if(initColor != color) {
            dfs(sr, sc, initColor, color, image);
        }
        return image;
    }
    void dfs(int i, int j, int initColor, int color, vector<vector<int>>& image) {
        int m = image.size(), n = image[0].size();
        if(i < 0 || j < 0 || i >= m || j >= n) return;
        if(image[i][j] != initColor) return;
        image[i][j] = color;
        dfs(i-1, j, initColor, color, image);
        dfs(i, j-1, initColor, color, image);
        dfs(i, j+1, initColor, color, image);
        dfs(i+1, j, initColor, color, image);
    }
};