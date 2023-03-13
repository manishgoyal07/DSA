//Problem:  First and last occurrences of x
//-------------------------------------------------------------------------------------
//Code :  

class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		int n=nums.size();
		vector<int> ans(2,-1);
		int l=0, r=n-1;
		while(l<=r){
			int mid = l+(r-l)/2;
			if(nums[mid]==target){
				ans[0]=mid;
				r=mid-1;
			}
			else if(nums[mid]>target) r=mid-1;
			else l=mid+1;
		}
		l=0, r=n-1;
		while(l<=r){
			int mid = l+(r-l)/2;
			if(nums[mid]==target){
				ans[1]=mid;
				l=mid+1;
			}
			else if(nums[mid]>target) r=mid-1;
			else l=mid+1;
		}
		return ans;
	}
};

//Time Complexity:  O(2LogN)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
