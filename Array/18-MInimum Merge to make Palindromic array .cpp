// Problem: Find minimum number of merge operations to make an array palindrome
/*-------------------------------------------------------------------------------------*/
// Approach 1 : Two-pointer
int mergeforpalindrome(vector<int> &nums) {
    int n = nums.size();
    int i = 0, j = n - 1, count = 0;
    while (i <= j) {                  // Traverse the array from both left & right simultaneously & check if the corresponding left and right elements are equal or not
        if (nums[i] != nums[j]) {     // If left and right elements are unequal,
            if (nums[i] < nums[j]) {  // If left element < Right element, then we'll merge it with next left-element and increment the counter
                i++;
                nums[i] += nums[i - 1];
                count++;
            } else {  // If right element < left element, then we'll merge it with next right-element and increment the counter
                j--;
                nums[j] += nums[j + 1];
                count++;
            }
        } else {  // If both elemnts are equal, we'll increment both the pointers.
            i++;
            j--;
        }
    }
    return count;
}
// Time Complexity:  O(N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
