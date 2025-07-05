class Solution:
    def findLucky(self, arr: List[int]) -> int:
        count = Counter(arr)
             
        return max([c for c in count if c == count[c]], default=-1)
        

        