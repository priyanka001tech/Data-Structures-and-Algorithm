# 2187. Minimum Time to Complete Trips

// You are given an array time where time[i] denotes the time taken by the ith bus to complete one trip.

// Each bus can make multiple trips successively; that is, the next trip can start immediately after completing the current trip. Also, each bus operates independently; that is, the trips of one bus do not influence the trips of any other bus.

// You are also given an integer totalTrips, which denotes the number of trips all buses should make in total. Return the minimum time required for all buses to complete at least totalTrips trips.

// Example 1:
 
// Input: s = "leetcode", t = "coats"
// Output: 7
// Explanation: 
// - In 2 steps, we can append the letters in "as" onto s = "leetcode", forming s = "leetcodeas".
// - In 5 steps, we can append the letters in "leede" onto t = "coats", forming t = "coatsleede".
// "leetcodeas" and "coatsleede" are now anagrams of each other.
// We used a total of 2 + 5 = 7 steps.
// It can be shown that there is no way to make them anagrams of each other with less than 7 steps.

CODE:

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
