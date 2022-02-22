// Memoization

class Solution {
private:
    int solve(int idx,  vector<int>& coins, int am, vector<vector<int>>& dp){
        if(idx==0) return am%coins[idx]==0;
        int notTake=solve(idx-1, coins, am,dp);
        int take=0;
        if(dp[idx][am]!=-1) return dp[idx][am];
        if(coins[idx]<=am){
            take=solve(idx, coins, am-coins[idx],dp);
        }
        return dp[idx][am] = take+notTake;
    }
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        return solve(n-1, coins, amount, dp);
    }
};
