//Problem:  Leaders in an array
//-------------------------------------------------------------------------------------
//Code :  

class Solution{
    public:
    vector<int> leaders(int a[], int n){
            vector<int> ans;
            int maxi=INT_MIN;
            for(int i=n-1; i>=0; i--){
            	if(a[i]>=maxi){
            		maxi = a[i];
            		ans.push_back(maxi);
            	}
            	else continue;
            }
            int i=0, j = ans.size()-1;
            while(i<=j){
                swap(ans[i++], ans[j--]);
            }
            return ans;
    }
};

//Time Complexity:  O(2N)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
	