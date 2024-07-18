class Solution:
    def longestPalindrome(self, s: str) -> int:
        out = 0
        odd = False
        for i in set(s):
            cnt = s.count(i)
            if cnt % 2 == 0:
                out += cnt
            else:
                out += cnt -1
                odd = True
        return out + odd

