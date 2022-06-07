// Problem:  1423. Maximum Points You Can Obtain from Cards
/*-------------------------------------------------------------------------------------*/
// Approach 1 :
int maxScore(vector<int>& cardPoints, int k) {
    int n = cardPoints.size();
    int windowpoints, totalpoints = 0;
    for (int i = 0; i < n; i++) {
        // Calculate the total points that can be obtained
        totalpoints += cardPoints[i];
    }
    if (k == n) {
        return totalpoints;
    }
    // 2-pointer approach: Subtract (n-k) size window sum from totalsum
    // After each iteration, window sum will get updated
    int maxpoints = INT_MIN, i = 0, j = 0, currpoints = 0, size = n - k;
    while (j < n) {
        // calculating sum of first window of (n-k) size and also add new last
        // element to new window
        currpoints += cardPoints[j];
        if (j - i + 1 == (size)) {
            maxpoints = max(maxpoints, totalpoints - currpoints);
            // subtract the first element of previous window from the current
            currpoints -= cardPoints[i];
            i++;
        }
        j++;
    }
    return maxpoints;
}
// Time Complexity:  O(2N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/