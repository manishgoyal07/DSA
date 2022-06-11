// Problem:  215. Kth Largest Element in an Array
/*-------------------------------------------------------------------------------------*/
// Approach 1 : Using Priority Queue
int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int> pq(nums.begin(), nums.end());
    for (int i = 0; i < k - 1; i++) {
        pq.pop();
    }
    return pq.top();
}
// Time Complexity:  O(N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
