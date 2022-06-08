// Problem:  Maximum-Subarray
/*-------------------------------------------------------------------------------------*/
// Approach 1 :  Kadane's Algorithm
int maxSubArray(vector<int>& nums) {
    int sum = 0, maxi = INT_MIN, n = nums.size();
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        maxi = max(maxi, sum);
        if (sum < 0) {
            sum = 0;
        }
    }
    return maxi;
}
// Time Complexity:  O(N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
