// Idea: The idea is very simple. The result string should contain all characters of s1 and s2 discarding the common ones.
// -> S1+S2-LCS
// because characters appearing in LCS are coming twice in the result. So count them only once.

// Here is the approach using dynamic programming:

// Compute the LCS using Dynamic Programming tabulation where each cell resturs the length of the cell upto i characters of String 1 and j characters of string 2.
// We will start processing the table using the last cell till i>0 or j>0
// 2.1) Check if s1[i-1]==s2[j-1]. If equal, we must add this character to the result string only once
// 2.2) If not equal, then find the maximum of t[i-1][j] and t[i][j-1] (this is how you had calculated LCS length first) , start moving in the max direction after inserting the character to the result string. Moving in max direction means discarding that character of the string that has not contributed in LCS. But still inserting in the final string because it will contribute in SuperSequence.
// i.e
// if (t[i-1][j]>t[i][j-1])
// {
// res.push_back(s1[i-1]); 
// i--; 
// }
// 2.3) Compute till i>0 && j>0. If any of the string is left i.e if i>0 or j>0 then add its characters to the result. This means that we copied 1 complete string but other is still remaining.
// We have got the required string but stored all the characters in reverse order. So, just reverse the result and you will get the final answer.
// Complete code for your refernece
// Hope it helps!
 
class Solution {
public:
    string shortestCommonSupersequence(string s1, string s2) {
        int n=s1.size(); 
        int m=s2.size();
        int t[n+1][m+1]; //table generated while computing LCS length
        string res; // result	
        // compute LCS length using tabulation      
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0||j==0)
                t[i][j]=0;
            else if(s1[i-1]==s2[j-1])
            {
                t[i][j]=1+t[i-1][j-1];
            }
            else
            {
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }     
       //print lcs
    int i=n,j=m;
    while(i>0 && j>0)
    {
        if(s1[i-1]==s2[j-1])
        {
            res.push_back(s1[i-1]);
            i--;
            j--;
        }
        else
        {
            if(t[i-1][j]>t[i][j-1])
            {
                res.push_back(s1[i-1]);
                i--;
            } else{
                res.push_back(s2[j-1]);
                j--;
            }
        }
    }
    while(i>0) // if s1 characters are still left
    {
        res.push_back(s1[i-1]);
        i--;
    }
    while(j>0) //if s2 characters are still left
    {
        res.push_back(s2[j-1]);
        j--;
        
    }
        reverse(res.begin(),res.end()); 
        return res;
    }
};
 
