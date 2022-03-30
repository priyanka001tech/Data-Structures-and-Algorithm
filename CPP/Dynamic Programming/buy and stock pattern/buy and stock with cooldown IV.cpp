309. Best Time to Buy and Sell Stock with Cooldown
You are given an array prices where prices[i] is the price of a given stock on the ith day.

Find the maximum profit you can achieve. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times) with the following restrictions:

After you sell your stock, you cannot buy stock on the next day (i.e., cooldown one day).
Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

Example 1:

Input: prices = [1,2,3,0,2]
Output: 3
Explanation: transactions = [buy, sell, cooldown, buy, sell]
Example 2:

Input: prices = [1]
Output: 0

// Memoization 
  
class Solution {
private: 
    int solve(int idx, int buy, vector<int>& prices, vector<vector<int>>& dp){
        if(idx>=prices.size()) return 0;
        if(dp[idx][buy]!=-1) return dp[idx][buy];
        if(buy==1){
            dp[idx][buy] = max(-prices[idx] + solve(idx+1, 0, prices,dp),
                         0 + solve(idx+1, 1, prices,dp));
        }
        else{
            dp[idx][buy] = max(prices[idx] + solve(idx+2, 1, prices,dp),
                      0 + solve(idx+1, 0, prices,dp));
        }
        return dp[idx][buy];
    }
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n, vector<int>(2,-1));
        return solve(0, 1, prices,dp);
    }
};

// Tabulation

class Solution {
  public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n+2, vector<int>(2,0));
        for(int idx=n-1; idx>=0;idx--){
            for(int buy=0;buy<=1;buy++){
                if(buy==1){
                    dp[idx][buy] = max(-prices[idx] + dp[idx+1][0],
                                 0 + dp[idx+1][1]);
                }
                else{
                    dp[idx][buy] = max(prices[idx] + dp[idx+2][1],
                              0 + dp[idx+1][0]);
                }
            }
        }
        return dp[0][1];
    }
};

