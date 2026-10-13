class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:
         maxcount = 0
         count = 0
         for i in range(0, len(nums)):
            if nums[i] == 1:
                count = count + 1
                maxcount = max(maxcount , count)
            else :
                count = 0    

         return maxcount       