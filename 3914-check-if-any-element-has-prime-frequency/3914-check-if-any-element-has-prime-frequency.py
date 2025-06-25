from math import sqrt
from collections import Counter


class Solution:
    def checkPrimeFrequency(self, nums: List[int]) -> bool:
        def is_prime(n):
            if n <= 1:
                return False
            if n == 2:
                return True
            if n % 2 == 0:
                return False
            for i in range(3, int(sqrt(n)) + 1, 2):
                if n % i == 0:
                    return False
            return True

        c = Counter(nums)
        for n in c.values():
            if is_prime(n):
                return True
        return False
