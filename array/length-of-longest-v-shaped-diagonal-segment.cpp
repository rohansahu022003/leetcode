class Solution {
private:
    void dfs(int row, int col, int& maxLen,
             vector<vector<int>>& vis,
             bool turn, vector<int>& temp,
             int i, int j, vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        vis[row][col] = 1;
        temp.push_back(grid[row][col]);
        maxLen = max(maxLen, (int)temp.size());

        int drow[] = {1, 1, -1, -1};
        int dcol[] = {1, -1, 1, -1};

        if (grid[row][col] == 1) {
            for (int k = 0; k < 4; k++) {
                int nrow = row + drow[k];
                int ncol = col + dcol[k];
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 2) {
                    dfs(nrow, ncol, maxLen, vis, turn, temp, nrow - row, ncol - col, grid);
                }
            }
        }
        else if (grid[row][col] == 2 || grid[row][col] == 0) {
            int expected = (grid[row][col] == 2 ? 0 : 2);
            int nrow = row + i;
            int ncol = col + j;
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == expected && !vis[nrow][ncol]) {
                dfs(nrow, ncol, maxLen, vis, turn, temp, i, j, grid);
            }
            if (!turn) { // allow one clockwise turn
                int ni = j, nj = -i; // clockwise rotation
                nrow = row + ni;
                ncol = col + nj;
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == expected && !vis[nrow][ncol]) {
                    dfs(nrow, ncol, maxLen, vis, true, temp, ni, nj, grid);
                }
            }
        }

        temp.pop_back();
        vis[row][col] = 0; // backtrack
    }

public:
    int lenOfVDiagonal(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int maxLen = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    vector<vector<int>> vis(n, vector<int>(m, 0));
                    vector<int> temp;
                    dfs(i, j, maxLen, vis, false, temp, 0, 0, grid);
                }
            }
        }
        return maxLen;
    }
};
