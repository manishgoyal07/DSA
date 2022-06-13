// Problem:  11. Container With Most Water
/*-------------------------------------------------------------------------------------*/
// Approach 1 : Two-Pointer Approach
int maxArea(vector<int>& height) {
    int water = 0;
    int i = 0, j = height.size() - 1;
    while (i < j) {  // Traverse the array from both left & right simultaneously
        int minheight = min(height[i], height[j]);  // Find the minimum height between the left and the right height.
        water = max(water, (j - i) * h);            // Check the max. amount of water that can be stored between the 2 towers
        while (height[i] <= minheight && i < j) {
            i++;  // Now, We'll find a tower from left with height > current height
        }
        while (height[j] <= minheight && i < j) {
            j--;  // Similarly, We'll find a tower from right with height > current height
        }
    }
    return water;
}
// Time Complexity:  O(N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
