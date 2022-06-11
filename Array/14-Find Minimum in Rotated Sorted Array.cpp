// Problem:  153. Find Minimum in Rotated Sorted Array
/*-------------------------------------------------------------------------------------*/
// Approach 1 : 3-Pointer + Binary Search
int findMin(vector<int>& nums) {
    int i = 0, j = nums.size() - 1;
    while (i <= j) {
        int mid = i + (j - i) / 2;
        if (nums[i] <= nums[j]) {  //Check iF start <= end, start will be the smallest
            return nums[i];
            break;
        } else {  //If start > end
            if (nums[mid] >= nums[i]) {  //Check if mid > start
                j = mid;  //If yes, the smallest lies in Right-Half
            } else {
                i = mid + 1; //If No, the smallest lies in Left-Half
            }
        }
    }
    return nums[i];  //Return Start
}
// Time Complexity:  O(logN)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
