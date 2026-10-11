class Solution:
    def passThePillow(self, n: int, time: int) -> int:
        fullrounds = time // (n-1)
        extratime = time % (n-1)

        if fullrounds % 2 == 0:
            return extratime + 1
        else:
            return n - extratime    