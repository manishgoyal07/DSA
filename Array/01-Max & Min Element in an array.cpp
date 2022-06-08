// Problem:  Maximum and Minimum Element in an Array
/*-------------------------------------------------------------------------------------*/
// Approach 1 : Mathematics
pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> ans;
    ans.first = INT_MAX, ans.second = INT_MIN;
    for (int i = 0; i < n; i++) {
        ans.first = min(ans.first, a[i]);
        ans.second = max(ans.second, a[i]);
    }
    return ans;
}
// Time Complexity:  O(N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
