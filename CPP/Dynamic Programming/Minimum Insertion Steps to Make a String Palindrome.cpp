class Solution {
private:
    int LCS(string& s, string& t, int i,int j, vector<vector<int>>& dp){
        if(i==0 || j==0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i-1]==t[j-1]){
            dp[i][j] = 1+LCS(s,t,i-1,j-1,dp);
        } 
        else{
           dp[i][j] = max(LCS(s,t,i,j-1,dp),LCS(s,t,i-1,j,dp));
        }
        // cout << dp[i][j] << endl;
        return dp[i][j];
    }
public:
    int minInsertions(string s) {
        string p=s;
        reverse(p.begin(), p.end());
        int n=s.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1,-1));
        int x=LCS(s,p,n,n,dp);
        return n-x;
    }
};
 
