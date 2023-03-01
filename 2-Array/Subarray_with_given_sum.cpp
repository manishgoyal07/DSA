//Problem:  
//-------------------------------------------------------------------------------------
//Code :  

class Solution{
public:

int lenOfLongSubarr(vector<int> arr, int n, int k) 
    { 
    	int sum = 0, maxi = 0;
    	unordered_map<int, int> mp;
    	for(int i=0; i<n; i++){
    		sum += arr[i];
    		if(sum == k)
    			maxi = max(maxi, i+1);
    		if(mp.find(sum)!=m.end())
    			maxi = max(maxi, i-m[sum]+1);
    		else
    			m[sum] = i;
    	}
    	return maxi;
    }

};

//Time Complexity:  O()
//Auxilary Space Complexity:  O()
//-------------------------------------------------------------------------------------
