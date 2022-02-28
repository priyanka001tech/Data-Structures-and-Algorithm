// Input: isConnected = [[1,1,0],[1,1,0],[0,0,1]]
// Output: 2
// Input: isConnected = [[1,0,0],[0,1,0],[0,0,1]]
// Output: 3
  
class Solution {
private: 
    vector<bool> vis;
    void dfs(vector<vector<int>>& isCon, int idx){
        if(vis[idx]) return;
        if(!vis[idx]){
            vis[idx]=true;
            for(int j = 0; j < vis.size(); j++) {
                if (idx != j && isCon[idx][j] && !vis[j]) {
                   dfs(isCon,j);
                }
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isCon) {
        int n=isCon.size();
        vis=vector<bool>(n,0);
        int c=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(isCon,i);
                c+=1;
            }
        }
        return c; 
    }
};
