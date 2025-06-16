class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if len(s) != len(goal):
            return False
        if Counter(s) != Counter(goal):
            return False
        

        for n in range(len(s)):
            s = s[1:] + s[0]
            if s == goal:
                return True
        return False
        