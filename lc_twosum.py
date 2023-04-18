class Solution(object):
    def twoSum(self, nums, target):
        r=[]
        for i in range(0,len(nums)):
            for j in range(i+1,len(nums)):
                if nums[i]+nums[j]==target:
                    if i!=j:
                        r.append(i)
                        r.append(j)
                        break
        return r  
