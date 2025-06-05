class Solution:
    def mostFrequentEven(self, nums: List[int]) -> int:
        has_even = False
        freq = {}
        max_f = 0
        for num in nums:
            if num % 2 == 0:
                has_even = True

                freq[num] = freq.get(num, 0) + 1
                if max_f < freq[num]:
                    max_f = freq[num]
                    max_num= num
                elif max_f == freq[num] and max_num> num:
                    max_num= num
                    

        
        if has_even == False:
            return -1
        
        return max_num


        