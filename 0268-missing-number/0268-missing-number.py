class Solution:
    def missingNumber(self, nums: list[int]) -> int:
        expectedsum = (len(nums) * (len(nums) + 1))//2
        actualsum = 0
        for i in range (0 , len(nums)):
            actualsum = actualsum + nums[i]

        return expectedsum - actualsum    