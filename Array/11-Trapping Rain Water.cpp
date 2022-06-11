// Problem:  42. Trapping Rain Water
/*-------------------------------------------------------------------------------------*/
// Approach 1 :  Two-Pointer
int trap(vector<int>& height) {
    int n = height.size();
    int lmax = height[0], rmax = height[n - 1], l = 1, r = n - 2, water = 0;
    while (l <= r) {  // Find the tower with max height from both left and right simultaneously
        if (lmax <= rmax) {
            if (height[l] >= lmax) {  // find minimum among max heights of left and right towers
                lmax = height[l];
            } else {
                water = water + lmax - height[l];  // Store thr difference between the min-max height and current tower height to get amount of water trapped at that position.
            }
            l++;
        } else {
            if (height[r] > rmax) {  // find minimum among max heights of left and right towers
                rmax = height[r];
            } else {
                water = water + rmax - height[r];  // Store thr difference between the min-max height and current tower height to get amount of water trapped at that position.
            }
            r--;
        }
    }
    return water;
}
// Time Complexity:  O(N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
