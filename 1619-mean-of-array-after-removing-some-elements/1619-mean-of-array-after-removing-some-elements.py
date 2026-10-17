class Solution:
    def trimMean(self, arr: list[int]) -> float:
        arr.sort()
        n = len(arr)
        remove = n//20
        total = 0
        for i in range(remove , n-remove):
            total += arr[i]
        return total/(n-2*remove)    