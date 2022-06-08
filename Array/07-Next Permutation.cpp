// Problem:  31. Next Permutation
/*-------------------------------------------------------------------------------------*/
// Approach 1 :
void nextPermutation(vector<int>& nums) {
    int i, shiftindex, n = nums.size();
    for (i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {  // Find index of the element which is Just
                                      // less than the Peak Element
            shiftindex = i;
            break;
        }
    }
    if (i < 0) {  // If no shiftindex is found, reverse the whole array(Case of
                  // Last Permutation)
        reverse(nums.begin(), nums.end());
    } else {  // If shiftindex is found
        for (int i = n - 1; i > shiftindex;
             i--) {  // Find the index of last-most element which is greater
                     // than element at shiftindex
            if (nums[i] > nums[shiftindex]) {
                swap(nums[i], nums[shiftindex]);  // If both found, Swap them
                                                  // and get out of the loop
                break;
            }
        }
        reverse(nums.begin() + shiftindex + 1,
                nums.end());  // Reverse the array from peak to end
    }
}
// Time Complexity:  O(2N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
