class Solution:
    def findUnique(self, arr):
        # code here 
        ans=0
        for i in arr:
            ans^=i
        return ans