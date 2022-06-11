// Problem:  238. Product of Array Except Self
/*-------------------------------------------------------------------------------------*/
// Approach 1 :
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    int Left = 1;
    int Right = 1;
    vector<int> res(n, 1);

    for (int i = 0; i < n; i++) {
        res[i] *= Left;            // Adding product of Left half in res
        Left *= nums[i];           // Updating the Left-Half Product
        res[n - 1 - i] *= Right;   // Adding product of Right half in res
        Right *= nums[n - 1 - i];  // Updating the Right-Half Product
    }
    return res;
}
// Time Complexity:  O(N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
