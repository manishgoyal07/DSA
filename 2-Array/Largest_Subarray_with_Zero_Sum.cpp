//Problem:  Largest subarray with zero sum
//-------------------------------------------------------------------------------------
//Code :  

class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
    	int count=0, maxi=0, sum=0;
    	unordered_map<int, int> mp;
    	for(int i=0; i<n; i++){
    		sum+=arr[i];
    		if(sum==0) maxi=i+1;
    		else if(mp.find(sum)!=mp.end()){
    			maxi=max(maxi, i-mp[sum]);
    		}
    		else mp[sum] = i;
    	}
    	return maxi;
    }
};

//Time Complexity:  O(N)
//Auxilary Space Complexity:  O(N)
//-------------------------------------------------------------------------------------
	