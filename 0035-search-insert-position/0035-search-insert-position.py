class Solution:
    def searchInsert(self, nums: list[int], target: int) -> int:
        ans = len(nums)
        start = 0
        end = len(nums)-1
        while start <= end:
            mid = start + (end - start)//2
            if nums[mid] >= target:
                ans = mid
                end = mid-1
            else:
                start = mid + 1

        return ans           