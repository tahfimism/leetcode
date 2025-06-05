class Solution:
    def arraySign(self, nums: List[int]) -> int:
        def signFunc(x):
            if X == 0:
                return 0
            elif x > 0:
                return 1
            elif x < 0:
                return -1
        product = 1
        for num in nums:
            if num == 0:
                return 0
            product *= num
        
        return signFunc(product)