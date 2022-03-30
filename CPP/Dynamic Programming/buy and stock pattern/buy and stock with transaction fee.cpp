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
