//Problem:  169. Majority Element
//-------------------------------------------------------------------------------------
//Code :  

class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int count=1, num=nums[0], n = nums.size();
       for(int i=1; i<n; i++){
           if(count==0){
               num = nums[i];
               count++;
           } 
           else if(nums[i] == num) count++;
           else count--;
       }
       return num;
    }
};

//Time Complexity:  O(N)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
