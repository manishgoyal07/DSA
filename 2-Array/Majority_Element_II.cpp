//Problem:  Majority Element(>n/3)
//-------------------------------------------------------------------------------------
//Code :  

class Solution {
  public:
    vector<int> Solve(int n, vector<int>& nums) {
        vector<int> ans;
        int count1=0, count2=0, ele1=0, ele2=0;
        for(int i=0; i<n; i++){
            if(nums[i]==ele1) count1++;
            else if(nums[i]==ele2)count2++;
            else if(count1==0){
                ele1=nums[i];
                count1++;
            }        
            else if(count2==0){
                ele2=nums[i];
                count2++;
            }
            else {

            count1--;
            count2--;
        }
    }
count1 = count2 = 0;
  for (int i = 0; i < n; i++) {
    if (nums[i] == ele1)
      count1++;
    else if (nums[i] == ele2)
      count2++;
  }
  if (count1 > n / 3)
    ans.push_back(ele1);
  if (count2 > n / 3)
    ans.push_back(ele2);
    if(ans.size()>0)return ans;
    return {-1};// Code here
    }
};

//Time Complexity:  O(2N)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
	