//Problem:  Maximum Product Subarray
//-------------------------------------------------------------------------------------
//Code :  

class Solution {
public:
	int maxProduct(vector<int>& nums) {
		int max_product = 1, min_product = 1, best_product = INT_MIN;
		for (auto i : nums) {
			if (i < 0) {
				swap(max_product, min_product);
			}
			max_product = max(max_product * i, i);
			min_product = min(min_product * i, i);
			best_product = max(best_product, max_product);
		}
		return best_product;
	}
};

//Time Complexity:  O(N)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
