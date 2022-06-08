// Problem:  Find if array Contains Duplicate
/*-------------------------------------------------------------------------------------*/
// Approach 1 : Sorting
bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int i = 0, j = 1, n = nums.size();
    while (j < n) {
        if (nums[j] == nums[i]) {
            return true;
            break;
        }
        i++;
        j++;
    }
    return false;
}
// Time Complexity:  O(NlogN)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
