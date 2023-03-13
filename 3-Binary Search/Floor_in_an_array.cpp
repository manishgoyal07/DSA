//Problem:  Lower Bound Function
//-------------------------------------------------------------------------------------
//Code :  

class Solution{
public:

	int findFloor(vector<long long> nums, long long n, long long target){
		bool isfound=false;
		long long l=0, r=n-1;
		while(l<=r){
			int mid = l+(r-l)/2;.js
			if(nums[mid]==target){
				return mid;
				isfound=true;
				break;
			}
			else if(nums[mid]>target) r=mid-1;
			else l=mid+1;
		}
		if(!isfound){
			int mid = l+(r-l)/2;
			return mid-1; 
		}        
	}

};

//Time Complexity:  O(LogN)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
