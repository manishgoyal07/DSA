//Problem: Peak Element
//-------------------------------------------------------------------------------------
//Code :

class Solution {
public:
	int findPeakElement(vector<int>& arr) {
		int l = 0, n = arr.size(), r = n - 1;
		while (l <= r) {
			int mid = l + (r - l) / 2;
			if ((mid == 0 || arr[mid] > arr[mid - 1]) && (mid == n - 1 || arr[mid] > arr[mid + 1])) return mid;
			else if (arr[mid] < arr[mid + 1]) l = mid + 1;
			else r = mid - 1;
		}
		return 0;
	}
};

//Time Complexity:  O(LogN)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------