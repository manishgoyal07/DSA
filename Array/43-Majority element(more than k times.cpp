// Problem:  Find all elements that appear more than " n/k " times in an Array.
/*-------------------------------------------------------------------------------------*/
// Approach 1 : Hashing
#include <bits/stdc++.h>
using namespace std;

void majorityelement(vector<int> &nums, int k, int n) {
    unordered_map<int, int> s;
    for (auto i : nums) {
        s[i] = 1;
    }
    int a = n / k;
    for (int i = 0; i < n; i++) {
        if (s[nums[i]] > a) {
            s[nums[i]] = -1;
            cout << nums[i] << endl;
        }
        if (s[nums[i]] == -1) {
            continue;
        } else {
            s[nums[i]]++;
        }
    }
}

int main() {
    vector<int> nums = {3, 1, 2, 2, 1, 2, 3, 3};
    majorityelement(nums, 4, 8);

    return 0;
}
// Time Complexity:  O(N)
// Auxillary Space Complexity:  O(N)
/*-------------------------------------------------------------------------------------*/
