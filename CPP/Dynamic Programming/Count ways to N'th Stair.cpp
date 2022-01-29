#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public: 
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int m)
    {
        vector<long long> dp(m+1);
        dp[0]=1;
        dp[1]=1;
        
        for(int i=2;i<=m;i++){
            dp[i]=dp[i-2]+1;
        }
        return dp[m];
    }
};


int main()
{
    //taking count of testcases
    int t;
    cin >> t;
    
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
} 
