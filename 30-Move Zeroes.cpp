// Problem:  283. Move Zeroes
/*-------------------------------------------------------------------------------------*/
// Approach 1 :
void moveZeroes(vector<int>& nums) {
    int i = 0, j = 1, n = nums.size();
    // Traverse the loop using j and i will be fixed to First zero
    while (j < n) {
        if (nums[i] == 0 && nums[j] != 0) {
            // i will point to 0 and j will point to non zero.
            swap(
                nums[i],
                nums[j]);  // Swap all the non zero numbers with the first zero.
            i++;
            j++;
        } else if (nums[i] == 0 && nums[j] == 0) {
            // if i is 0 and j is also 0, then increment j by 1
            j++;
        } else {
            // while i!=0
            i++;
            j++;
        }
    }
}
// Time Complexity:  O(N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
