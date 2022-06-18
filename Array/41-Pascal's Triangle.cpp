// Problem:  Program to generate Pascal’s Triangle
/*-------------------------------------------------------------------------------------*/
// Approach 1 : Mathematics
#include <bits/stdc++.h>
using namespace std;

void pascaltriangle(int n) {
    vector<vector<int>> res(n);
    for (int i = 0; i < n; i++) {
        res[i].resize(i + 1);
        res[i][0] = 1;
        res[i][i] = 1;
        for (int j = 1; j < i; j++) {
            res[i][j] = res[i - 1][j] + res[i - 1][j - 1];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    pascaltriangle(7);
    return 0;
}
// Time Complexity:  O(N^2)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
