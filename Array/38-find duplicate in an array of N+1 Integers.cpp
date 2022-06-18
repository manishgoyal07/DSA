// Problem:  287. Find the Duplicate Number
/*-------------------------------------------------------------------------------------*/
// Approach 1 : Using Fast & Slow Pointer
#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];
    do {
        slow = nums[slow];        // It will move 1 position in each iteration
        fast = nums[nums[fast]];  // It will move 2 positions in each iteration
    } while (fast != slow);
    fast = nums[0];
    while (fast != slow) {
        fast = nums[fast];  // It will move 1 position in each iteration
        slow = nums[slow];  // It will move 1 position in each iteration
    }
    return fast;
}
int main() {
    vector<int> nums = {1, 3, 4, 2, 2, 5};
    cout << findDuplicate(nums) << endl;
    return 0;
}
// Time Complexity:  O(N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
