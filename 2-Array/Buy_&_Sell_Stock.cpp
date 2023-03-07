//Problem:  121. Best Time to Buy and Sell Stock
//-------------------------------------------------------------------------------------
//Code :  

class Solution {
public:
   int maxProfit(vector<int>& prices) {
    int min_buy = prices[0], max_profit = 0;

    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] < min_buy) {
            min_buy = prices[i];
        }
        max_profit = max(max_profit, prices[i]-min_buy);
    }
    return max_profit;
}
};

//Time Complexity:  O(N)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
	