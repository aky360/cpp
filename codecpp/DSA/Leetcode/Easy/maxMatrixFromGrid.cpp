/*
2373. Largest Local Values in a Matrix.
*/

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        const int m = grid.size() - 2;
        vector<vector<int>> ans(m, vector<int>(m));
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < m; ++j)        
                for (int dy = 0; dy <= 2; ++dy)
                    for (int dx = 0; dx <= 2; ++dx)
                        ans[i][j] = max(ans[i][j], grid[i + dy][j + dx]);        
        return ans;
    }
};
