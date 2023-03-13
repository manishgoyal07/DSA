//Problem:  
//-------------------------------------------------------------------------------------
//Code :  

class Solution {
  public:
    int niceSubarray(int n, vector<int> &arr) {
       int maxi=0, len=0;
       for(int i=0; i<n; i++){
        if(arr[i]==1){
            int temp=1;
            if(arr[i]==temp){
                temp++; len++;
                maxi=max(maxi,len);
            }
        }
        else len=0;
       }
    return maxi;
    }
};

//Time Complexity:  O()
//Auxilary Space Complexity:  O()
//-------------------------------------------------------------------------------------
    