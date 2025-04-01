class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        // Your code here
        int totalgain=0;
        int totalspent=0;
        
        for(int i =0;i<gas.size();i++)
        {
            totalgain+=gas[i];
            totalspent+=cost[i];
        }
        
        if(totalgain < totalspent)
        {
            return -1;
        }
        
        int index=0;
        int total=0;
        
        for(int i=0;i<gas.size();i++)
        {
            total+=gas[i]-cost[i];
            if(total < 0)
            {
                index=i+1;
                total=0;
            }
        }
        return index;
    }
};
