
class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        mp = {}

        for i in range(0, len(nums)):
            mp[nums[i]] = mp.get(nums[i], 0) + 1

        ans = float('-inf')
        result = 0

        for key, value in mp.items():
            if ans < value:
                ans = value
                result = key

        return result
