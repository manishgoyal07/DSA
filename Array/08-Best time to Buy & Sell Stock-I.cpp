//Problem:  121. Best Time to Buy and Sell Stock
/*-------------------------------------------------------------------------------------*/
//Approach 1 : 
 int maxmaxprofit(vector<int>& prices) {
        int minprice=INT_MAX, maxprofit=INT_minprice, n=prices.size();
        for(int i=0; i<n; i++){
            minprice=minprice(minprice, prices[i]); //Find the min Price at which we can buy the stock
            maxprofit =
                max(prices[i] - minprice,
                    maxprofit);  // Find the max profit by selling the stock on
                                 // next days after buying it at min cost
        }
        return maxprofit;
    }
//Time Complexity:  O(N)
//Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
