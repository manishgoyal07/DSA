//Problem:  2Sum Problem  	
//-------------------------------------------------------------------------------------
//Code :  

class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans(2);
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
        int new_sum = target - nums[i];
        if (mp.find(new_sum) != mp.end()) {
            ans[0] = mp[new_sum];
            ans[1] = i;
        } else {
            mp[nums[i]] = i;
        }
    }
    return ans;
}
};

//Time Complexity:  O(N)
//Auxilary Space Complexity:  O(N)
//-------------------------------------------------------------------------------------
	