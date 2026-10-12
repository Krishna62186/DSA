class Solution:
    def singleNumber(self, nums: list[int]) -> int:
        xore = 0
        for i in range(0, len(nums)):
            xore = xore ^ nums[i]

        return xore
