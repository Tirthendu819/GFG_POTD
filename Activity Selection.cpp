/*
You are given a set of activities, each with a start time and a finish time, represented by the arrays start[] and finish[], respectively. A single person can perform only one activity at a time, meaning no two activities can overlap. Your task is to determine the maximum number of activities that a person can complete in a day.
Examples:

Input: start[] = [1, 3, 0, 5, 8, 5], finish[] = [2, 4, 6, 7, 9, 9]
Output: 4
Explanation: A person can perform at most four activities. The maximum set of activities that can be executed is {0, 1, 3, 4}

Input: start[] = [10, 12, 20], finish[] = [20, 25, 30]
Output: 1
Explanation: A person can perform at most one activity.
*/



//TC:-O(nlogn)
//SC:-O(n)


class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        vector<pair<int,int>>ans;
        for(int i=0;i<finish.size();i++)
        {
            ans.push_back({start[i],finish[i]});
        }
        
        auto comp=[&](auto & a,auto& b)
        {
            return a.second<b.second;
        };
        sort(ans.begin(),ans.end(),comp);
        
        int count=1;
        int currfinishtime=ans[0].second;
        for(int i=1;i<finish.size();i++)
        {
            if(ans[i].first>currfinishtime)
            {
                count++;
                currfinishtime=ans[i].second;
            }
        }
        return count;
    }
};

