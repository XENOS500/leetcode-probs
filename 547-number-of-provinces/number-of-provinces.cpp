class Solution {
public:
    void dfs(int node,vector<vector<int>>mat,vector<int> &vis){
        vis[node]=1;
        
        for(int i=0;i<mat[node].size();i++)
        {
            if(i == node)continue;
            if(!vis[i]&&mat[node][i]==1){
                dfs(i,mat,vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans=0;
        vector<int> vis(isConnected[0].size(),0);
        for(int i=0;i<isConnected[0].size();i++)
        {   
            if(!vis[i]){
                 dfs(i,isConnected,vis);
                ans++;
            }
               
        }
        return ans;
    }
};