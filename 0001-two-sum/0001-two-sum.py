class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        mp = {}
        for i in range (0, len(nums)):
            need = target - nums[i]

            if need in mp:
                return [mp[need] , i]
            mp[nums[i]]  = i

        return[]      
