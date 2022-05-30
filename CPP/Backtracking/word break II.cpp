// RECURSION
/*

    Time Complexity: O(N * (2 ^ (N - 1)))
    Space Complexity: O(N* (2 ^ (N - 1))
    
    Where N is the length of the string S.

*/

#include <unordered_set>
using namespace std;

vector<string> wordBreakHelper(string &s, int idx, unordered_set<string> &dictSet, int size)
{
    // Base Condition
    if (idx == size)
    {
        return {""};
    }

    vector<string> subPart, completePart;
    string word = "";

    /*
        Start exploring the sentence from the index until we wouldn't find 'j' such that substring [index,j] exists in the dictionary as a word.
    */
    for (int j = idx; j < size; j++)
    {

        word.push_back(s[j]);
        if (dictSet.count(word) == 0)
        {
            continue;
        }

        //  Get the answer for rest of sentence from 'j' to s.size().
        subPart = wordBreakHelper(s, j + 1, dictSet, size);

        //  Append "word" with all the answer that we got.
        for (int i = 0; i < subPart.size(); i++)
        {
            if (subPart[i].size() != 0)
            {
                string temp = word;
                temp.append(" ");
                temp.append(subPart[i]);
                subPart[i] = temp;
            }
            else
            {
                subPart[i] = word;
            }
        }

        for (int i = 0; i < subPart.size(); i++)
        {
            completePart.push_back(subPart[i]);
        }
    }
    return completePart;
}
vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    //  Set to check the whether any word exists in the dictionary or not.
    unordered_set<string> dictSet;

    for (int i = 0; i < dictionary.size(); i++)
    {
        dictSet.insert(dictionary[i]);
    }
    return wordBreakHelper(s, 0, dictSet, s.size());
}

//MEMOIZATION
/*

    Time Complexity: O(N * (2 ^ (N - 1)))
    Space Complexity: O(N* (2 ^ (N - 1)))
    
    Where N is the length of the string S.

*/

#include <unordered_map>
#include <unordered_set>

vector<string> wordBreakHelper(string &s, int idx, unordered_set<string> &dictSet, unordered_map<int, vector<string>> &dp, int size)
{
    // Base Condition
    if (idx == size)
    {
        return {""};
    }

    // Already has a solution for the current sentence, simply return the solution.
    if (dp.find(idx) != dp.end())
    {
        return dp[idx];
    }

    vector<string> subPart, completePart;
    string word = "";

    /*
        Start exploring the sentence from the index until we wouldn't find 'j' such that substring [index,j] exists in the dictionary as a word.
    */
    for (int j = idx; j < size; j++)
    {

        word.push_back(s[j]);
        if (dictSet.count(word) == 0)
        {
            continue;
        }

        // Get the answer for rest of sentence from 'j' to s.size().
        subPart = wordBreakHelper(s, j + 1, dictSet, dp, size);

        // Append "word" with all the answer that we got.
        for (int i = 0; i < subPart.size(); i++)
        {
            if (subPart[i].size() != 0)
            {
                string temp = word;
                temp.append(" ");
                temp.append(subPart[i]);
                subPart[i] = temp;
            }
            else
            {
                subPart[i] = word;
            }
        }

        for (int i = 0; i < subPart.size(); i++)
        {
            completePart.push_back(subPart[i]);
        }
    }

    // Store all the answer for the current index in the map
    dp[idx] = completePart;

    return dp[idx];
}

vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    // dp[idx] will store the all possible sentence which have been formed from the current index 'idx' to end of the given s.
    unordered_map<int, vector<string>> dp;

    //  Set to check whether any word exists in the dictionary or not.
    unordered_set<string> dictSet;

    for (int i = 0; i < dictionary.size(); i++)
    {
        dictSet.insert(dictionary[i]);
    }
    return wordBreakHelper(s, 0, dictSet, dp, s.size());
}


// TRIE
/*
    Time Complexity : O(N * (2 ^(N - 1))
    Space Complexity :  O(26 * K * | word |)

    Where N is the length of string 'S', 'K' is the number of words in the dictionary and | word | is the length of each word. 
    
*/

class TrieNode
{

public:
    TrieNode *children[26];
    bool isTerminal;

    TrieNode()
    {
        // Setting all children of a new trie node to NULL
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        this->isTerminal = false;
    }
};

void insert(TrieNode *root, string word)
{
    TrieNode *curr = root;
    for (int i = 0; i < word.size(); i++)
    {
        // Expanding the Trie if the branch was not there yet
        if (curr->children[word[i] - 'a'] == NULL)
        {
            curr->children[word[i] - 'a'] = new TrieNode();
        }
        curr = curr->children[word[i] - 'a'];
    }
    // Mark last node as leaf
    curr->isTerminal = true;
}

void search(TrieNode *root, string &s, vector<string> &res, string temp, int pos)
{
    TrieNode *curr = root;

    for (int i = pos; i < s.size(); i++)
    {
        if (curr->children[s[i] - 'a'] == NULL)
        {
            return;
        }
        if (curr->children[s[i] - 'a']->isTerminal == true)
        {
            // Last word we found with a positive lookup
            string lastWord = temp;
            lastWord.append(s.substr(pos, i - pos + 1));

            // If it is also the last character of s, update res
            if (i == s.size() - 1)
            {
                res.push_back(lastWord);
            }
            // Recursive calls otherwise
            else
            {
                search(root, s, res, lastWord + " ", i + 1);
            }
        }
        curr = curr->children[s[i] - 'a'];
    }
    return;
}

vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    // Base Trie
    TrieNode *root = new TrieNode();

    // Add dictionary words into trie
    for (int i = 0; i < dictionary.size(); i++)
    {
        insert(root, dictionary[i]);
    }

    // Computing the final result
    vector<string> res;
    search(root, s, res, "", 0);

    return res;
}
