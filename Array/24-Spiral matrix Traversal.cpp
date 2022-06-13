// Problem:  54. Spiral Matrix
/*-------------------------------------------------------------------------------------*/
// Approach 1 :
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    vector<int> res;
    int U = 0, D = m - 1, L = 0, R = n - 1, dir = 0;
    while (L <= R && U <= D) {
        if (dir == 0) {
            for (int i = L; i <= R; i++) {
                res.push_back(matrix[U][i]);
            }
            U++;
        } else if (dir == 1) {
            for (int i = U; i <= D; i++) {
                res.push_back(matrix[i][R]);
            }
            R--;
        } else if (dir == 2) {
            for (int i = R; i >= L; i--) {
                res.push_back(matrix[D][i]);
            }
            D--;
        } else if (dir == 3) {
            for (int i = D; i >= U; i--) {
                res.push_back(matrix[i][L]);
            }
            L++;
        }
        dir = (dir + 1) % 4;
    }
    return res;
}
// Time Complexity:  O(M*N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
