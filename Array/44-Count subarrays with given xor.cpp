// Problem:  Count the number of subarrays with given xor K
/*-------------------------------------------------------------------------------------*/
// Approach 1 :
#include <bits/stdc++.h>
using namespace std;

int subarraywithxor(vector<int> &nums, int n, int k) {
    int prefix_xor = 0, count = 0;
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        prefix_xor ^= nums[i];
        if (prefix_xor == k) {
            count++;
        }
        int y = k ^ prefix_xor;
        if (m.find(y) != m.end()) {
            count += m[y];
        } else {
            m[prefix_xor]++;
        }
    }
    return count;
}

int main() {
    vector<int> nums = {4, 2, 2, 6, 4};
    int k = 6, n = nums.size();
    cout << subarraywithxor(nums, n, k) << endl;

    return 0;
}
// Time Complexity:  O()
// Auxillary Space Complexity:  O()
/*-------------------------------------------------------------------------------------*/
