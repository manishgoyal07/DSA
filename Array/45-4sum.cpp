// Problem:  18. 4Sum
/*-------------------------------------------------------------------------------------*/
// Approach 1 : 2-Pointer + Two-Sum
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> res;

    if (nums.empty()) {
        return res;
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        long long target_3 = target - nums[i];
        for (int j = i + 1; j < nums.size(); j++) {
            long long target_2 = target_3 - nums[j];
            int front = j + 1;
            int back = nums.size() - 1;
            while (front < back) {
                long long two_sum = nums[front] + nums[back];
                if (two_sum < target_2) {
                    front++;
                } else if (two_sum > target_2) {
                    back--;
                } else {
                    vector<int> quadruplet(4, 0);
                    quadruplet[0] = nums[i];
                    quadruplet[1] = nums[j];
                    quadruplet[2] = nums[front];
                    quadruplet[3] = nums[back];
                    res.push_back(quadruplet);
                    while (front < back && nums[front] == quadruplet[2]) ++front;
                    while (front < back && nums[back] == quadruplet[3]) --back;
                }
            }
            while (j + 1 < nums.size() && nums[j + 1] == nums[j]) {
                ++j;
            }
        }
        while (i + 1 < nums.size() && nums[i + 1] == nums[i]) {
            ++i;
        }
    }
    return res;
}

void printans(vector<vector<int>>& res) {
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[0].size(); j++){
            cout << res[i][j] << " ";
         } cout << endl;
    }
}

int main() {
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> a = fourSum(nums, target);
    printans(a);
    return 0;
}
// Time Complexity:  O(N^2*LogN)
// Auxillary Space Complexity:  O(N)
/*-------------------------------------------------------------------------------------*/
