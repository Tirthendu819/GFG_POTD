class Solution {
  public:
    int maxPartitions(string &s) {
        // code here
        vector<int>lo(26,-1);
        for(int i=s.size()-1; i >=0; i--)
        {
            if(lo[s[i]-'a']==-1)
            {
                lo[s[i]-'a']=i;
            }
        }
        
        int c=0;
        int a=-1;
        
        for(int i=0;i<s.size();i++)
        {
            a=max(lo[s[i]-'a'],a);
            if(a==i)
            {
                c++;
            }
        }
        return c;
    }
};
