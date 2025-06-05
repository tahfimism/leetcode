class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        max = 0
        freqs = {}
        for n in nums:
            freqs[n] = freqs.get(n,0) + 1
            if freqs[n] > len(nums) // 2:
                return n



        