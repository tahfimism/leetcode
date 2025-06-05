class Solution:
    def arraySign(self, nums: List[int]) -> int:
        if 0 in nums:
            return 0
        def signFunc(x):
            if X == 0:
                return 0
            elif x > 0:
                return 1
            elif x < 0:
                return -1
        product = 1
        for num in nums:
            product *= num
        
        return signFunc(product)