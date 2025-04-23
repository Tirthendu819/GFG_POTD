class Solution:
	def singleNum(self, arr):
		# Code here
          mpp={}
          ans=[]
          arr.sort()
          for num in arr:
              if num in mpp:
                  mpp[num]+=1
              else:
                  mpp[num] = 1
              for i in arr:
                  if mpp[num] ==1:
                      ans.append(num)
              return ans               


        # This function returns a list of unique numbers from the input array.
            #counts = Counter(arr)
            #return [x for x in arr if counts[x] == 1]