//Problem:  Search insert Position
//-------------------------------------------------------------------------------------
//Code :  

class Solution{
public:

	int searchInsert(vector<int>& nums, int target) {
		int n=nums.size();
		int l=0, r=n-1;
		while(l<=r){
			int mid = l+(r-l)/2;
			if(nums[mid]==target){
				return mid;
				break;
			}
			else if(nums[mid]>target) r=mid-1;
			else l=mid+1;
		}
		int mid = l+(r-l)/2;
		return mid;
	}

};

//Time Complexity:  O(LogN)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
