#include <bits/stdc++.h>
using namespace std;

int minLength(string s, string t)
{
    unordered_map<char, int> mp;
    for (int i = 0; i < t.length(); i++)
    {
        mp[t[i]]++;
    }

    int i = 0, j = 0, count = mp.size();
    vector<int> ans;

    //============================
    while (j < s.length())
    {

        //Conditions

        if (mp.find(s[j]) != mp.end())
        {

            mp[s[j]]--;

            if (mp[s[j]] == 0)
                count--;
        }

        if (count == 0)
        {
            int a=1;
            while (count==0)
            {
                if (mp.find(s[i]) != mp.end())
                {
                    if (mp[s[i]] < 0)
                    {
                        mp[s[i]]++;
                        i++;
                    }
                    else if (mp[s[i]] > 0)
                    {
                        count++;
                        break; 
                    }
                    else
                    {
                        ans.push_back(j-i+1);
                        a=0;
                    }

                }
                else
                {
                    i++;
                }
                if(a==0)
                    break;
            }
        }

        j++;
    }
    //============================
    int n = *min_element(ans.begin(), ans.end());
    return n;
}

int main()
{
    system("cls");
    // string s = "TOTMTAPTAT";     // Output: 3
    // string t = "TTA";

    // string s = "timetopractice";     //Output: 6
    // string t= "toc";

    string s = "a";     //Output: 1
    string t= "a";

    cout << "Answer: " << minLength(s, t);

    return 0;
}
