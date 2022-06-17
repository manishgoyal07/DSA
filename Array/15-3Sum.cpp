// Problem: 15. 3Sum
/*-------------------------------------------------------------------------------------*/
// Approach 1 :  Sorting + 2-pointer
vector<vector<int>> threeSum(vector<int>& num) {
    vector<vector<int>> res;
    sort(num.begin(), num.end());                      // 1. Sort the Array
    for (int i = 0; i < (int)(num.size()) - 2; i++) {  // 2. Taking num[i] as first element of triplet
        if (i == 0 || (i > 0 && num[i] != num[i - 1])) {
            int j = i + 1, k = (int)(num.size()) - 1, sum = 0 - num[i];
            while (j < k) {  // 3. searching the other 2 nos in rest of the array using 2 pointer technique(Similar to 2sum)
                if (num[j] + num[k] == sum) {
                    res.push_back({num[i], num[j], num[k]});
                    while (j < k && num[j] == num[j + 1]) {
                        j++;
                    } // For Omitting Duplicates
                    while (j < k && num[k] == num[k - 1]) {
                        k--;
                    } // For Omitting Duplicates
                    j++;
                    k--;
                } 
                else if (num[j] + num[k] < sum)
                    j++;
                else
                    k--;
            }
        }
    }
    return res;
}
// Time Complexity:  O(N^2)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
