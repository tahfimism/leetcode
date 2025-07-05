class Solution:
    def findLucky(self, arr: List[int]) -> int:
        count = Counter(arr)
        n = 0

        lucky = [c for c in count if c == count[c]]
        return max(lucky) if lucky else -1
        