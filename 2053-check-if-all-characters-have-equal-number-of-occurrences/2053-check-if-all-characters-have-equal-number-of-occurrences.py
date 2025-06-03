class Solution:
    def areOccurrencesEqual(self, s: str) -> bool:
        freqs = {}
        for c in s:
            freqs[c] = freqs.get(c,0) + 1
        f = freqs[s[0]]
        for freq in freqs.values():
            if f != freq:
                return False
        return True