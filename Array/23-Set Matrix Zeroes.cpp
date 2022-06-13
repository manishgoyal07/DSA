// Problem:  73. Set Matrix Zeroes
/*-------------------------------------------------------------------------------------*/
// Approach 1 :
void setZeros(vector<vector<int>> &matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int i, j, col0 = 1;  // Col0 will store 0 if there's any 0 in 0th column
    for (i = 0; i < rows; i++) {
        if (matrix[i][0] == 0) {  // Check if 0th column has any 0
            col0 = 0;
        }
        for (j = 1; j < cols; j++) {  // Set th first row and first coluumn of the matrix at i & jth position as ) if there's ) at any mat[i][j]
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }  // Again traverse through the matrix to set rows and columns as 0
    for (i = rows - 1; i >= 0; i--) {
        for (j = cols - 1; j > 0; j--) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
        if (col0 == 0) {
            matrix[i][0] = 0;
        }
    }
}
// Time Complexity:  O(M*N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
