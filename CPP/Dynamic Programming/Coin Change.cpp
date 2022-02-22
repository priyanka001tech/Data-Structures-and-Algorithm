// Memoization
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int Max = amount + 1;
        vector<int> dp(amount + 1, Max);
        dp[0] = 0;
        for (int i = 1; i <= amount; i++) {
            for (int j = 0; j < coins.size(); j++) {
                if (coins[j] <= i) {
                    dp[i] = min(dp[i], dp[i - coins[j]] + 1);
                }
            }
        }
        return dp[amount] > amount ? -1 : dp[amount];
    }
};

//Tabulation:
int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,0));
        for(int i=0;i<=amount;i++){
            dp[0][i]=(i%coins[0]==0);
        }
        for(int idx=1;idx<n;idx++){
            for(int am=0;am<=amount;am++){
                int notTake=dp[idx-1][am];
                int take=0;
                if(coins[idx]<=am){
                    take=dp[idx][am-coins[idx]];
                }
                dp[idx][am] = take+notTake;
            }
        }
        return dp[n-1][amount];
}
