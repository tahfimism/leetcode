class Solution:
    def maxAdjacentDistance(self, nums: List[int]) -> int:
        dif = 0

        for i in range(-1, len(nums)-1):
            if abs(nums[i] - nums[i+1]) > dif:
                dif = abs(nums[i] - nums[i+1])
        
        return dif

        