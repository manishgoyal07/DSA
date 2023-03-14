//Problem: Search Element in rotated sorted array - 2
//-------------------------------------------------------------------------------------
//Code :

class Solution {
public:
	bool search(vector<int>& nums, int k) {
		int n = nums.size();
		int l = 0, r = n - 1;
		bool flag = false;
		while (l <= r) {
			int mid = l + (r - l) / 2;
			if (nums[mid] == k) {
				flag = true;
				break;
			}
			if (nums[mid] == nums[l] && nums[mid] == nums[r]) {
				l++; r--;
			}
			else if (nums[l] <= nums[mid]) {
				if (k <= nums[mid] && k >= nums[l]) r = mid - 1;
				else l = mid + 1;
			}
			else {
				if (k <= nums[r] && k >= nums[mid + 1]) l = mid + 1;
				else r = mid - 1;
			}
		}
		return flag;
	}
};

//Time Complexity:  O(LogN)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------