//Problem:  Single element in a Sorted Array
//-------------------------------------------------------------------------------------
//Code :

class Solution {
public:
	int singleNonDuplicate(vector<int>& nums) {
		int n = nums.size();
		int l = 0, r = n - 1;
		while (l <= r) {
			int mid = l + (r - l) / 2;
			if ((mid == 0 || nums[mid] != nums[mid - 1]) && (mid == n - 1 || nums[mid] != nums[mid + 1])) return nums[mid];
			if (mid % 2 == 0) {
				if (mid == 0 || nums[mid] == nums[mid - 1]) r = mid - 1;
				else l = mid + 1;
			}
			else {
				if (mid == 0 || nums[mid] == nums[mid - 1]) l = mid + 1;
				else r = mid - 1;
			}
		}
		return 0;
	}
};

//Time Complexity:  O(LogN)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------