class Solution {
  public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
       vector<vector<int>>ans=image;
       int n=image.size();
       int m=image[0].size();
       int inicolor=image[sr][sc];
       queue<pair<int,int>>q;
       q.push({sr,sc});
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
         ans[sr][sc] = newColor;
      
       while(!q.empty())
       {
           int row=q.front().first;
           int col=q.front().second;
           //int color=q.front().second;
           q.pop();
          
           
           for(int i=0;i<4;i++)
           {
               int nrow=row+delrow[i];
               int ncol=col+delcol[i];
               
               if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && ans[nrow][ncol]!=newColor && image[nrow][ncol]==inicolor)
               {
                   q.push({nrow,ncol});
                   ans[nrow][ncol]=newColor;
               }
           }
       }
       return ans;
    }
};
