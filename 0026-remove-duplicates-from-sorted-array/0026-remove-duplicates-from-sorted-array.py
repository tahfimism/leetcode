class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        num = []
        c = 0
        for i in range(len(nums)):
            if nums[i] not in num:
                num.append(nums[i])
                nums[c] = nums[i]
                c += 1
        return len(num)