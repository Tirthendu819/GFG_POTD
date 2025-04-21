class Solution:
    def findDuplicate(self, arr):
        
        #code here
        mpp={}
        for i in arr:
            if i in mpp:
                mpp[i]+=1
            else:
                mpp[i]=1
        
        for key,value in mpp.items():
            if(value>1):
                return key
            
'''
from collections import Counter
class Solution:
    def findDuplicate(self, arr):
        
        #code here
        count=[]
        count=Counter(arr)
        for i in arr:
            if(count[i]>1):
                return i            
  '''