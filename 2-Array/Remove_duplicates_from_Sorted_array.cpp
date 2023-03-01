//Problem:  26. Remove Duplicates from Sorted Array

//-------------------------------------------------------------------------------------
//Code :  

class Solution{
public:

    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i=0, j=1;
        for(j=1; j<n; j++){
            if(nums[i] !=nums[j]){
                i++;
            }
            swap(nums[i], nums[j]);
        }
        return i+1;
    }

};

//Time Complexity:  O(N)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
