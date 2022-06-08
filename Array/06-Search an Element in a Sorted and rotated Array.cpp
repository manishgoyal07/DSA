// Problem:  Search an element in a sorted and rotated array
/*-------------------------------------------------------------------------------------*/
// Approach 1 : Binary Search
int search(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (target == nums[mid]) {  // 1 - Check if target = mid or not
            return mid;
        }
        if (nums[low] <= nums[mid]) {  // 2 - Check if Left Half is Sorted or
                                       // not
            if (target >= nums[low] &&
                target <= nums[mid]) {  // 2a - Check if the target lies in left
                                        // half or not
                high = mid - 1;
            } else {
                low = mid +
                      1;  // 2b - That means target does not lies in left half
            }
        } else {  // If Condition-2 is False. That means the right half will
                  // definitely be sorted
            if (target >= nums[mid] &&
                target <=
                    nums[high]) {  // 3 - Check if the target lies in Right Half
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }
    return -1;  // If target not found anywhere in the array.
}
// Time Complexity:  O(LogN)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
