// Problem:  493. Reverse Pairs
/*-------------------------------------------------------------------------------------*/
// Approach 1 :
#include <bits/stdc++.h>
using namespace std;

int mergesort(vector<int> &nums, int start, int end){
    if(start==end){
        return 0;
    }
    int mid=start+(end-start)/2;
    mergesort(nums, start, mid);
    mergesort(nums, mid+1, end);
    merge(nums, start, mid, end);
}

int reversePairs(vector<int>nums) {
    cout << mergesort(nums, 0, nums.size()-1) << endl;
}

int main() {
    return 0;
}
// Time Complexity:  O()
// Auxillary Space Complexity:  O()
/*-------------------------------------------------------------------------------------*/
