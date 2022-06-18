// Problem:  128. Longest Consecutive Sequence
/*-------------------------------------------------------------------------------------*/
// Approach 1 :
#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums) {
    if (nums.size() == 0) {
        return 0;
    } else {
        unordered_set<int> s(nums.begin(), nums.end());
        int res = 1;
        for (int i : nums) {
            if (s.find(i) == s.end()) {
                s.erase(i);
                continue;
            }
            int prev = i - 1, next = i + 1;
            while (s.find(prev) != s.end()) {
                s.erase(prev);
                prev--;
            }
            while (s.find(next) != s.end()) {
                s.erase(next);
                next++;
            }
            res = max(res, next - prev - 1);
        }
        return res;
    }
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << longestConsecutive(nums) << endl;
    return 0;
}
// Time Complexity:  O(N)
// Auxillary Space Complexity:  O(N)
/*-------------------------------------------------------------------------------------*/
