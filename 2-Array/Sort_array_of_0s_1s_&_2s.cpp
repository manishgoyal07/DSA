//Problem:  Sort an array of 0s, 1s and 2s
//-------------------------------------------------------------------------------------
//Code :  

class Solution {
public:
   void sortColors(vector<int> &nums){
       int lo=0, mid=0, hi=nums.size()-1;
       while(mid<=hi){
           if(nums[mid]==0){
               swap(nums[mid], nums[lo]);
           lo++; mid++;
           }
           else if(nums[mid]==2){
               swap(nums[mid], nums[hi]);
               hi--;
           }
           else{
               mid++;
           }
       }
   }
};

//Time Complexity:  O(N)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
	