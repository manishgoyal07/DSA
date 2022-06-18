// Problem:  18. 4Sum
/*-------------------------------------------------------------------------------------*/
// Approach 1 :
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            int left = j + 1, right = nums.size() - 1;
            int temptarget = target - nums[i] + nums[j];
            while (left < right) {
                int twosum = nums[left] + nums[right];
                if (twosum > temptarget) {
                    left++;
                } else if (twosum < temptarget) {
                    right--;
                } else {
                    vector<int> ans(4);
                    ans[0] = nums[i];
                    ans[1] = nums[j];
                    ans[2] = nums[left];
                    ans[3] = nums[right];
                    res.push_back(ans);
                     while (left+ 1 < nums.size() && nums[left + 1] == nums[left]) {
                        left++;
                    }

                    while (right + 1 < nums.size() && nums[right + 1] == nums[right]) {
                        right++;
                    }
                }
            }
            while (j + 1 < nums.size() && nums[j + 1] == nums[j]) {
                j++;
            }
        }
        while (i + 1 < nums.size() && nums[i + 1] == nums[i]) {
            i++;
        }
    }
    return res;
}

void printans(vector<vector<int>>& res) {
}

int main() {
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    printans(fourSum(nums, target));
    return 0;
}
// Time Complexity:  O()
// Auxillary Space Complexity:  O()
/*-------------------------------------------------------------------------------------*/
