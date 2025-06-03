class Solution:
    def longestPalindrome(self, s: str) -> int:
        freqs = {}
        for c in s:
            freqs[c] = freqs.get(c,0) + 1
        extra = False

        count = 0
        for freq in freqs.values():
            if freq % 2 == 0:
                count += freq
            else:
                count = count + (freq - 1)
                extra = True

        if extra == True:
            count += 1

        return count

        