// # Minimum Number of Steps to Make Two Strings Anagram II

// You are given two strings s and t. In one step, you can append any character to either s or t.

// Return the minimum number of steps to make s and t anagrams of each other.

// An anagram of a string is a string that contains the same characters with a different (or the same) ordering.
 
// Example 1:

// Input: s = "leetcode", t = "coats" 
// Output: 7
// Explanation: 
// - In 2 steps, we can append the letters in "as" onto s = "leetcode", forming s = "leetcodeas".
// - In 5 steps, we can append the letters in "leede" onto t = "coats", forming t = "coatsleede".
// "leetcodeas" and "coatsleede" are now anagrams of each other.
// We used a total of 2 + 5 = 7 steps.
// It can be shown that there is no way to make them anagrams of each other with less than 7 steps.

class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> mpp,mpp2;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(mpp[t[i]]) mpp[t[i]]--;
            else{
                mpp2[t[i]]++;
            }
        }
        int c=0;
        for(auto i:mpp){
            c+=i.second;
            //cout << i.first << " " << i.second << endl;
        }
        for(auto i:mpp2){
            c+=i.second;
        }
        return c;
    }
};
