//Problem:  Minimum Element in rotated Sorted Array
//-------------------------------------------------------------------------------------
//Code :  

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0, r=n-1;
        while(l<=r){
        	int mid=l+(r-l)/2;
        	if(nums[l]<=nums[r]){
        		return nums[l];
        		break;
        	}
        	else if(nums[l]<=nums[mid]){
        		r=mid-1;
        	}
        	else l=mid+1;
        }
        return nums[l];
    }
};

//Time Complexity:  O()
//Auxilary Space Complexity:  O()
//-------------------------------------------------------------------------------------
