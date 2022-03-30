You are given an array prices where prices[i] is the price of a given stock on the ith day, and an integer fee representing a transaction fee.

Find the maximum profit you can achieve. You may complete as many transactions as you like, but you need to pay the transaction fee for each transaction.

Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

Example 1:
Input: prices = [1,3,2,8,4,9], fee = 2
Output: 8
Explanation: The maximum profit can be achieved by:
- Buying at prices[0] = 1
- Selling at prices[3] = 8
- Buying at prices[4] = 4
- Selling at prices[5] = 9
The total profit is ((8 - 1) - 2) + ((9 - 4) - 2) = 8.
  
Example 2:
Input: prices = [1,3,7,5,10,3], fee = 3
Output: 6
  
// Recursion
 class Solution {
private:
    int solve(int idx, int buy, vector<int>& prices, int fee){
        if(idx==prices.size()) return 0;
        if(buy==1){
            return max(-prices[idx] + solve(idx+1, 0, prices, fee),
                      0 + solve(idx+1, 1, prices, fee));
        }
        else{
            return max(prices[idx]-fee + solve(idx+1, 1, prices, fee),
                      0 + solve(idx+1, 0, prices, fee));
        }
    }
public:
    int maxProfit(vector<int>& prices, int fee) {
        return solve(0, 1, prices, fee);
    }
};

//Memoization
class Solution {
private:
    int solve(int idx, int buy, vector<int>& prices, int fee, vector<vector<int>>& dp){
        if(idx==prices.size()) return 0;
        if(dp[idx][buy]!=-1) return dp[idx][buy];
        if(buy==1){
            dp[idx][buy] = max(-prices[idx] + solve(idx+1, 0, prices, fee, dp),
                      0 + solve(idx+1, 1, prices, fee, dp));
        }
        else{
            dp[idx][buy] = max(prices[idx]-fee + solve(idx+1, 1, prices, fee, dp),
                      0 + solve(idx+1, 0, prices, fee, dp));
        }
        return dp[idx][buy];
    }
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<vector<int>> dp(n, vector<int>(2,-1));
        return solve(0, 1, prices, fee,dp);
    }
};

//Tabulation
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<vector<int>> dp(n+1, vector<int>(2,0));
        dp[n][0]=dp[0][1]=0;
        for(int idx=n-1; idx>=0; idx--){
                    dp[idx][1] = max(-prices[idx] + dp[idx+1][0],
                              0 + dp[idx+1][1]);

                    dp[idx][0] = max(prices[idx]-fee + dp[idx+1][1],
                              0 + dp[idx+1][0]);

        }
        return dp[0][1];
    }
};
