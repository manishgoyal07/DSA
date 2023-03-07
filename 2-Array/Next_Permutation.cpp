//Problem:  Next permutation
//-------------------------------------------------------------------------------------
//Code :  

class Solution {
public:
   void nextPermutation(vector<int>& nums) {
    int i = nums.size() - 2;
    while (i >= 0) {
        if (nums[i] < nums[i + 1]) {
            break;
        }
        i--;
    }
    if (i < 0) {
        reverse(nums.begin(), nums.end());
    } else {
        for (int j = nums.size() - 1; j > i; j--) {
            if (nums[j] > nums[i]) {
                swap(nums[j], nums[i]);
                break;
            }
        }
        reverse(nums.begin() + i + 1, nums.end());
    }
}
};

//Time Complexity:  O(3N)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
	