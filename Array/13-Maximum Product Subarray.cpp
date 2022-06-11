// Problem:  152. Maximum Product Subarray
/*-------------------------------------------------------------------------------------*/
// Approach 1 :
    int maxProduct(vector<int>& nums) {
        int maxp = 1, minp = 1, best = INT_MIN;
        for (auto i : nums) {
            if (i < 0){
            swap(maxp, minp);  //Swap max and min product if any no. is negative 
            }
            maxp = max(maxp * i, i);  //Calculate the max product in each iteration
            minp = min(minp * i, i);  //Calculate the min product in each iteration(If any no. is < 0, the max will becode min and vice cersa)
            best = max(best, maxp);  //Calculate the best(max) among max. and min product
        }
        return best;
    }
// Time Complexity:  O(N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
