class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        try:
            num = list(set(nums))
            num.sort(reverse=True)
            return num[2]
        except IndexError:
            return num[0]