class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        count = 0
        ma=0
        for i in nums :
            if len(nums)==1 :
                return nums[0]
           
            if i==1 :
                count+=1
            else :
                count=0
            if count>ma :
                ma=count 
        return ma
        
