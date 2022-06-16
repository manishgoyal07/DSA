// Problem:  Create a Matrix with Alternating Rectangles of O and X
/*-------------------------------------------------------------------------------------*/
// Approach 1 : Spiral Traversal

#include <bits/stdc++.h>
using namespace std;

void AlternateRectangle(int m, int n) {
    char res[m][n];
    int U = 0, D = m - 1, L = 0, R = n - 1;
    char ch = 'X';
    while (U <= D && L <= R) {
        if (L < R) {  // Left ot Right
            for (int i = L; i <= R; i++) {
                res[U][i] = ch;
            }
            U++;
        }
        if (U < D) {  // Up to Down
            for (int i = U; i <= D; i++) {
                res[i][R] = ch;
            }
            R--;
        }
        if (R > L) {  // Right to Left
            for (int i = R; i >= L; i--) {
                res[D][i] = ch;
            }
            D--;
        }
        if (D > U) {  // Down to Up
            for (int i = D; i >= U; i--) {
                res[i][L] = ch;
            }
            L++;
        }
        // Swap O & X
        if (ch == 'X') {
            ch = 'O';
        } else {
            ch = 'X';
        }
    }
    // Print the resultant matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {  // Main Function
    int m = 6, n = 6;
    AlternateRectangle(m, n);
    return 0;
}
// Time Complexity:  O(M*N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
