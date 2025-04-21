
class Solution {
  public:
    vector<int> bellmanFord(int v, vector<vector<int>>& edges, int src) {
  vector<int>dist(v,1e8);
        dist[src]=0;
        for(int c=0;c<=v-1;c++)
        {
            for(auto &edge : edges)
            {
                int u=edge[0];
                int v=edge[1];
                int w=edge[2];
                
                if(dist[u]!=1e8 && dist[u]+w<dist[v])
                {
                    dist[v]=dist[u]+w;
                }
            }
            
        }
        for(auto &edge : edges)
            {
                int u=edge[0];
                int v=edge[1];
                int w=edge[2];
                
                if(dist[u]!=1e8 && dist[u]+w<dist[v])
                {
                    //dist[v]=dist[u]+w;
                    return {-1};
                }
            }
            return dist;
    }
};

