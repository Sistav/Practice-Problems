class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        b_x = bin(start ^ goal)
        s_x = str(b_x)
        return s_x.count('1')

