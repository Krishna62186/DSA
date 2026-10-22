class Solution:
    def frequencySort(self, s: str) -> str:
        freq = {}

        for ch in s:
            freq[ch] = freq.get(ch, 0) + 1

        s = sorted(s, key=lambda ch: (-freq[ch], ch))

        return "".join(s)
