//Problem:  Reverse Pairs
//-------------------------------------------------------------------------------------
//Code :  

class Solution {
public:
	int Merge(vector<int> &nums, int low, int mid, int high) {
		int count = 0;
		int j = mid + 1;
		for (int i = low; i <= mid; i++) {
			while (j <= high && nums[i] > 2LL * nums[j]) {
				count += (mid-i+1);
				j++;
			}
		}
		sort(nums.begin()+low, nums.begin()+high+1);
		return count;
	}
	int MergeSort(vector<int>& nums, int low, int high) {
		if (low >= high) {
			return 0;
		}
		int count=0;
		int mid = (low + high) / 2;
		count += MergeSort(nums, low, mid);
		count +=  MergeSort(nums, mid + 1, high);
		count +=  Merge(nums, low, mid, high);
		return count;
	}
	int reversePairs(vector<int>& arr) {
		int count = 0;
		count += MergeSort(arr, 0, arr.size() - 1);
		return count;
	}
};

//Time Complexity:  O(NlogN)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
