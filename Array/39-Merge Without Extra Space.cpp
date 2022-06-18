// Problem:  Merge Without Extra Space
/*-------------------------------------------------------------------------------------*/
// Approach 1 :  Shell Sort(Gap Theorm)
#include <bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m) {
    int gap = (n + m + 1) / 2;
    while (gap > 0) {
        int i = 0, j = gap;
        while (j < (m + n)) {
            if (j < n) {
                if (arr1[j] < arr1[i]) {
                    swap(arr1[i], arr1[j]);
                }
            } else if (i < n && j >= n) {
                if (arr2[j - n] < arr1[i]) {
                    swap(arr1[i], arr2[j - n]);
                }
            } else if (i >= n) {
                if (arr2[j - n] < arr2[i - n]) {
                    swap(arr2[i - n], arr2[j - n]);
                }
            }
            i++;
            j++;
        }
        if (gap == 1) {
            gap = 0;
        } else {
            gap = (gap + 1) / 2;
        }
    }
}

void printans(long long arr1[], long long arr2[], int n, int m) {
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
}

int main() {
    return 0;
    long long arr1[] = {1, 5, 3, 7, 8};
    long long arr2[] = {4, 2, 6, 8};
    int n = 5, m = 4;
    merge(arr1, arr2, n, m);
    printans(arr1, arr2, n, m);
    return 0;
}
// Time Complexity:  O(N+M)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
