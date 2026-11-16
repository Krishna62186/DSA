
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        mpp = [-1] * 256

        right = 0
        left = 0
        length = 0

        while right < len(s):
            if mpp[ord(s[right])] != -1:
                left = max(left, mpp[ord(s[right])] + 1)

            mpp[ord(s[right])] = right

            length = max(right - left + 1, length)

            right = right + 1

        return length
