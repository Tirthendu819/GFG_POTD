  bool dfs(int node,vector<vector<int>>adj,vector<int>&vis,vector<int>&pathvis)
    {
        vis[node]=1;
        pathvis[node]=1;
        
        for(auto it : adj[node])
        {
            if(!vis[it])
            {
                if(dfs(it,adj,vis,pathvis)==true)
                {
                    return true;
                }
            }
            else if(pathvis[it]==1)
            {
                return true;
            }
        }
        pathvis[node]=0;
        return false;
    }
  
