class Solution {
  public:
    // Function to find the shortest distance of all the vertices
    // from the source vertex src.
    vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src) {
        // Code here
        
        int v=adj.size();
        
        vector<int>dist(v);
        for(int i=0;i<v;i++)
        {
            dist[i]=1e9;
        }
        dist[src]=0;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,src});
        
        while(!pq.empty())
        {
            int dis=pq.top().first;
            int node=pq.top().second;
            
            pq.pop();
            
            for(auto it : adj[node])
            {
                int adjnode=it.first;
                int edgewt=it.second;
                
                if(dis+edgewt<dist[adjnode])
                {
                    dist[adjnode]=dis+edgewt;
                    pq.push({dist[adjnode],adjnode});
                }
            }
        }
        return dist;
    }
};
