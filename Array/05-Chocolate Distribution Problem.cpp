// Problem:  Chocolate Distribution Problem
/*-------------------------------------------------------------------------------------*/
// Approach 1 : Sorting + Sliding Window
long long findMinDiff(vector<long long> a, long long n, long long m) {
    sort(a.begin(), a.end());
    int i = 0, j = m - 1;
    long long mindiff = INT_MAX;
    while (j < n) {
        mindiff = min(mindiff, a[j] - a[i]);
        i++;
        j++;
    }
    return mindiff;
}
// Time Complexity:  O(NLogN)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
