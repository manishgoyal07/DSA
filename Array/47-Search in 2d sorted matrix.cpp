// Problem:  74. Search a 2D Matrix
/*-------------------------------------------------------------------------------------*/
// Approach 1 : Binary Search + Mathematics
#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.size() == 0 || matrix[0].size() == 0) {
        return false;
    }
    int n = matrix.size();
    int m = matrix[0].size();
    int lo = 0;
    int hi = n * m - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (matrix[mid / m][mid % m] == target) {
            return true;
        }
        if (matrix[mid / m][mid % m] > target) {
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 7;
    return 0;
}
// Time Complexity:  O((M*N)log(M*N))
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
