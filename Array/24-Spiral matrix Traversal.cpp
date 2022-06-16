// Problem:  54. Spiral Matrix
/*-------------------------------------------------------------------------------------*/
// Approach 1 : Mathematics
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    vector<int> res;
    int U = 0, D = m - 1, L = 0, R = n - 1, dir = 0;
    while (L <= R && U <= D) {
        if (dir == 0) {  // Left to Right
            for (int i = L; i <= R; i++) {
                res.push_back(matrix[U][i]);
            }
            U++;
        } else if (dir == 1) {  // top to bottom
            for (int i = U; i <= D; i++) {
                res.push_back(matrix[i][R]);
            }
            R--;
        } else if (dir == 2) {  // Right to Left
            for (int i = R; i >= L; i--) {
                res.push_back(matrix[D][i]);
            }
            D--;
        } else if (dir == 3) {  // bottom to top
            for (int i = D; i >= U; i--) {
                res.push_back(matrix[i][L]);
            }
            L++;
        }
        dir = (dir + 1) % 4;  // Again set direction to )
    }
    return res;
}
// Time Complexity:  O(M*N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
