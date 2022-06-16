//Problem:  48. Rotate Image
/*-------------------------------------------------------------------------------------*/
//Approach 1 : 
  void rotate(vector<vector<int>>& matrix) {
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<i; j++){
                swap(matrix[i][j], matrix[j][i]);  //Swap the corresponding row-column elements from each other(Do Transpose of Matrix)
            }
        }
        for(int i=0; i<matrix.size(); i++){
            reverse(matrix[i].begin(), matrix[i].end());  //Reverse each row of the matrix
        }
    }
//Time Complexity:  O(N*M)
//Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
