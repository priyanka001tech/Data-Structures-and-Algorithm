#include<bits/stdc++.h>
using namespace std;
 
// Function to find if two strings are equal
bool areAnagram(string s1, string s2)
{
    map<char, int> m;
    for(int i = 0; i < s1.length(); i++)
        m[s1[i]]++;
         
    for(int i = 0; i < s2.length(); i++)
        m[s2[i]]--;
         
    for(auto it = m.begin(); it != m.end(); it++)
        if(it -> second != 0)
            return false;
             
        return true;
}
 
int countAnagrams(string text, string word)
{
     
    // Initialize result
    int res = 0;
    for(int i = 0;
            i < text.length() - word.length() + 1;
            i++)
    {
         
        // Check if the word and substring are
        // anagram of each other.
        if (areAnagram(text.substr(i, word.length()),
                                      word))
            res++;
    }
    return res;
}
 
// Driver Code
int main()
{
    string text = "forxxorfxdofr";
    string word = "for";
     
    cout << countAnagrams(text, word);
     
    return 0;
}
 
// Sliding Window Technique...........

class Solution{
public:
	int search(string pat, string txt) {
	    int n=txt.size();
	    int k=pat.size();
	    int i=0;
	    vector<int> mt(26,0);
	    vector<int> mp(26,0);
	    
	    for(int i=0;i<k;i++){
	        mp[pat[i]-'a']++;
	        mt[txt[i]-'a']++;
	    }
	    int c=0;
	    if(mp==mt) c++;
	    for(i=k;i<n;i++){
	        mt[txt[i]-'a']++;
	        mt[txt[i-k]-'a']--;
	        if(mp==mt) c++;
	    }
	    return c;
	}

};
