// Problem:  Minimize the maximum difference between the heights
/*-------------------------------------------------------------------------------------*/
// Approach 1 :
#include <bits/stdc++.h>
using namespace std;

int minimizedifference(vector<int> &nums, int n, int k) {
    sort(nums.begin(), nums.end());       // Sort the array
    int maxdiff = nums[n - 1] - nums[0];  // Max difference would be the difference of givwen array initially
    int tempmin = nums[0], tempmax = nums[n - 1];
    for (int i = 0; i < n; i++) {
        if ((nums[i] - 0) < 0) {  // Ifelement becomes -ve
            continue;
        }
        tempmin = min(nums[0] + k, nums[i] - k);          // calculate the respective value comparing both the operations
        tempmax = max(nums[i - 1] + k, nums[n - 1] - k);  // calculate the respective value comparing both the operations
        maxdiff = min(maxdiff, tempmax - tempmin);        // Claculate new max difference
    }
    return maxdiff;
}

int main() {
    vector<int> nums = {1, 15, 5, 10};
    cout << minimizedifference(nums, nums.size(), 3);
}
// Time Complexity:  O(NlogN)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
