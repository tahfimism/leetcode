class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        l1 = len(word1)
        l2 = len(word2)
        l = min(l1, l2)

        new = ""

        for i in range(l):
            new = new + word1[i] + word2[i]
        
        if l1 > l2:
            return new + word1[l:]
        elif l2 > l1:
            return new + word2[l:]
        else:
            return new
