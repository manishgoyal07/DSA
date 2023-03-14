//Problem: Search Element in rotated sorted array - 1 
//-------------------------------------------------------------------------------------
//Code :

class Solution {
public:
	int search(vector<int>& nums, int k) {
		int n = nums.size();
		int l = 0, r = n - 1, ans = -1;
		while (l <= r) {
			int mid = l + (r - l) / 2;
			if (nums[mid] == k) {
				ans = mid;
				break;
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
		return ans;
	}
};

//Time Complexity:  O(LogN)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------