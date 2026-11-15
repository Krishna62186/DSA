class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        n = len(needle)
        m = len(haystack)

        for i in range(0, m - n + 1):
            j = 0

            while j < n and haystack[i+j] == needle[j]:
                j += 1

            if j == n:
                return i

        return -1