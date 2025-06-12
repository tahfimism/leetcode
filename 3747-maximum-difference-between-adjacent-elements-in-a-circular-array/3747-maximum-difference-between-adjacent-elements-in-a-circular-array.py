class Solution:
    def maxAdjacentDistance(self, nums: List[int]) -> int:
        dif = 0

        for i in range(len(nums)-1):
            if abs(nums[i] - nums[i+1]) > dif:
                dif = abs(nums[i] - nums[i+1])
        if abs(nums[0] - nums[-1]) > dif:
            dif = abs(nums[0] - nums[-1])
        return dif

        