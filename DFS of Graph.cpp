
class Solution {
  public:
  
    void solve(vector<vector<int>>&adj,int node,vector<int>& vis,vector<int>&ans)
    {
        if(vis[node]==1)
        {
            return;
        }
        
        vis[node]=1;
        ans.push_back(node);
        
        for(auto it : adj[node])
        {
            if(vis[it]==-1)
            {
                solve(adj,it,vis,ans);
            }
        }
    }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n=adj.size();
        vector<int>vis(n,-1);
        
        vector<int>ans;
        solve(adj,0,vis,ans);
        return ans;
    }
};

