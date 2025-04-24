class Solution:
    def getSingle(self, arr):
        # code here 
        mpp={}
        ans=[]
        for i in arr:
            if i in mpp:
                mpp[i]+=1
            else:
                mpp[i]=1
        for i in arr:
            if mpp[i]==1:
                return i