// You are given an integer array prices where prices[i] is the price of a given stock on the ith day, and an integer k.
// Find the maximum profit you can achieve. You may complete at most k transactions.
// Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

// Example 1:

// Input: k = 2, prices = [2,4,1] 
// Output: 2 
// Explanation: Buy on day 1 (price = 2) and sell on day 2 (price = 4), profit = 4-2 = 2.
// Example 2:

// Input: k = 2, prices = [3,2,6,5,0,3]
// Output: 7
// Explanation: Buy on day 2 (price = 2) and sell on day 3 (price = 6), profit = 6-2 = 4. Then buy on day 5 (price = 0) and sell on day 6 (price = 3), profit = 3-0 = 3.
  

class Solution {
private:
    int solve(int idx, int buy, int k, vector<int>& prices, vector<vector<vector<int>>>& dp){
        if(idx>=prices.size() || k==0) return 0;
        if(dp[idx][buy][k]!=-1) return dp[idx][buy][k];
        if(buy==1){
            dp[idx][buy][k] = max((-prices[idx] + solve(idx+1, 0, k, prices, dp)),
                       0  +  solve(idx+1, 1, k, prices,dp));
        }
        else{
            dp[idx][buy][k] = max((prices[idx] + solve(idx+1, 1, k-1, prices,dp)),
                       0  +  solve(idx+1, 0, k, prices,dp));
        }
        return dp[idx][buy][k];
    }
public:
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2,vector<int>(k+1,-1)));
        return solve(0, 1, k, prices, dp);
    }
};
