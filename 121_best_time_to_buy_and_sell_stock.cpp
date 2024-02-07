/*  

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.   

*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int maxprofit = 0;
        int min_buy = INT_MAX;
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < min_buy) min_buy = prices[i];
            profit = prices[i] - min_buy;
            if(profit > maxprofit) maxprofit = profit;
        }
        return maxprofit;
    }
};