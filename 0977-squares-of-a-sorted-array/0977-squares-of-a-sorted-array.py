class Solution:
    def sortedSquares(self, nums: list[int]) -> list[int]:
        ans = []
        for i in range(0 , len(nums)):
            ans.append(nums[i] * nums[i])

        ans.sort() 
        return ans