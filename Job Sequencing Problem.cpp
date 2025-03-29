/*
You are given two arrays: deadline[], and profit[], which represent a set of jobs, where each job is associated with a deadline, and a profit. Each job takes 1 unit of time to complete, and only one job can be scheduled at a time. You will earn the profit associated with a job only if it is completed by its deadline.
Your task is to find:
The maximum number of jobs that can be completed within their deadlines.
The total maximum profit earned by completing those jobs.
Examples :
Input: deadline[] = [4, 1, 1, 1], profit[] = [20, 10, 40, 30]
Output: [2, 60]
Explanation: Job1 and Job3 can be done with maximum profit of 60 (20+40).
Input: deadline[] = [2, 1, 2, 1, 1], profit[] = [100, 19, 27, 25, 15]
Output: [2, 127]
Explanation: Job1 and Job3 can be done with maximum profit of 127 (100+27)
*/

//TC:-O(nlogn)
//SC:-O(n)



class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        // code here
        vector<int>ans={0,0};
        vector<pair<int,int>>jobs;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<profit.size();i++)
        {
            jobs.push_back({deadline[i],profit[i]});
        }
        sort(jobs.begin(),jobs.end());
        
        for(auto it : jobs)
        {
            if(it.first > pq.size())
            {
                pq.push(it.second);
            }
            else if(!pq.empty() && pq.top() < it.second)
            {
                pq.pop();
                pq.push(it.second);
            }
            
        }
        while(!pq.empty())
        {
            ans[1]=ans[1]+pq.top();
            pq.pop();
            ans[0]++;
        }
        return ans;
    }
};
