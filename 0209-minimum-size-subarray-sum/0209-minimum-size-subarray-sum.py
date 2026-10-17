
class Solution:
    def minSubArrayLen(self, target: int, nums: list[int]) -> int:
        left = 0
        mini = float('inf')
        total = 0

        for right in range(len(nums)):
            total += nums[right]

            while total >= target:
                mini = min(mini, right - left + 1)
                total -= nums[left]
                left += 1

        return 0 if mini == float('inf') else mini
