// Problem:  493. Reverse Pairs
/*-------------------------------------------------------------------------------------*/
// Approach 1 : Merge Sort
#include <bits/stdc++.h>
using namespace std;

void Merge(vector<int> &nums, int low, int mid, int high, int &count) {
    int total = 0;
    int j = mid + 1;
    for (int i = low; i <= mid; i++) {
        while (j <= high && nums[i] > 2LL * nums[j]) {
            j++;
            total++;
        }
        count += total;
    }

    vector<int> temp;
    int left = low, right = mid + 1;
    while (left <= mid && right <= high) {
        if (nums[left] <= nums[right]) {
            temp.push_back(nums[left]);
            left++;
        } else {
            temp.push_back(nums[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(nums[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(nums[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        nums[i] = temp[i - low];
    }
}

void MergeSort(vector<int> &nums, int low, int high, int &count) {
    if (low >= high) {
        return;
    }
    int mid = (low + high) / 2;
    MergeSort(nums, low, mid, count);
    MergeSort(nums, mid + 1, high, count);
    Merge(nums, low, mid, high, count);
}

int reversePairs(vector<int> &nums) {
    int count = 0;
    MergeSort(nums, 0, nums.size() - 1, count);
    return count;
}

int main() {
    vector<int> nums = {1, 3, 2, 3, 1};
    cout << reversePairs(nums) << endl;
    return 0;
}
// Time Complexity:  O(NlogN)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
