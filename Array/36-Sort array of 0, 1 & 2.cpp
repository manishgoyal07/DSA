// Problem:  75. Sort Colors
/*-------------------------------------------------------------------------------------*/
// Approach 1 : DNF Sort
void sortColors(vector<int> &nums) {
    int lo = 0, mid = 0, hi = nums.size() - 1;
    while (mid <= hi) {
        if (nums[mid] == 0) {
            swap(nums[mid], nums[lo]);  // If mid = 0, swap it with lo(All Elements before lo will be 0)
            lo++;
            mid++;
        } else if (nums[mid] == 2) {
            swap(nums[mid], nums[hi]);  // If mid = 2, swap it with hi(All Elements after hi will be 2)
            hi--;
        } else {
            mid++;  // If mid = 1
        }
    }
}
// Time Complexity:  O(N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
