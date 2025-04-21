def missingNum(self, arr):
        # code here
        ans=1
        n=len(arr)
        for i in arr:
            if i==ans:
                ans+=1
                
        return ans