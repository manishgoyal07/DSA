// Problem:  122. Best Time to Buy and Sell Stock II
/*-------------------------------------------------------------------------------------*/
// Approach 1 : Mathematics
#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int buy = prices[0];
    int sell, profit = 0;
    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] < buy) {
            buy = prices[i];
        } else if (prices[i] > buy) {
            sell = prices[i];
            profit += (sell - buy);
            buy = sell;
        }
    }
    return profit;
}

int main() {
    vector<int> prices = {};
    cout << maxProfit(prices) << endl;
    return 0;
}
// Time Complexity:  O(N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
