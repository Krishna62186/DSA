class Solution:
    def pivotIndex(self, nums: list[int]) -> int:
        totalsum =0
        for i in range (0 , len(nums)):
            totalsum += nums[i]

        leftsum = 0
        for i in range(0 , len(nums)):
            rightsum = totalsum - leftsum - nums[i]
            if rightsum == leftsum:
                return i
            leftsum += nums[i]    

        return -1   