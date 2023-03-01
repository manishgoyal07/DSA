//Problem:  
//-------------------------------------------------------------------------------------
//Code :  

class Solution{
public:

    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int arrsum=0, sum = 0;
        if(n>0) sum = n*(n+1)/2;
        for(auto i: nums) arrsum += i;
        	return sum-arrsum;
    }

};

//Time Complexity:  O()
//Auxilary Space Complexity:  O()
//-------------------------------------------------------------------------------------
	