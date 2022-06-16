// Problem:  200. Number of Islands
/*-------------------------------------------------------------------------------------*/
// Approach 1 : DFS
void dfs(vector<vector<char>>& grid, int i, int j) {
    if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == '2' || grid[i][j] == '0') {
        return;  // Edge Cases
    }
    grid[i][j] = '2';  // Mark for Visited
    dfs(grid, i - 1, j);
    dfs(grid, i, j + 1);
    dfs(grid, i + 1, j);
    dfs(grid, i, j - 1);
    grid[i][j] = '1';
}
int numIslands(vector<vector<char>>& grid) {
    int count = 0;
    for (int i = 0; i < grid.size(); i++) {  // Search for the first Island(1)
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == '1') {
                dfs(grid, i, j);
                count++;
            }
        }
    }
    return count;
}
// Time Complexity:  O(M*N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
