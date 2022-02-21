class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
    
        if(find(wordList.begin(),wordList.end(),endWord)==wordList.end())
            return 0;
            set<string> s;
            for(auto i:wordList)
                s.insert(i);
            queue<string> q;
            q.push(beginWord);
            int d=0;
            while(!q.empty())
            {
                d++;
                int n=q.size();
                while(n--)
                {
                    string curr=q.front();
                    q.pop();
                    for(int i=0;i<curr.length();i++)
                    {
                        string tmp=curr;
                        for(char c='a';c<='z';c++)
                        {
                            tmp[i]=c;
                            if(tmp==curr)
                                continue;
                            if(tmp==endWord)
                                return d+1;
                            if(s.find(tmp)!=s.end())
                            {
                                q.push(tmp);
                                s.erase(tmp);
                            }
                        }
                    }
                }
            }
            return 0;
    }
};
