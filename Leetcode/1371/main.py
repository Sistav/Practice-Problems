class Solution:
    def findTheLongestSubstring(self, s):
        big = 0
        n = len(s)
        vow = ['a', 'e', 'i', 'o', 'u']
        state = 0
        seen = {0: -1}

        for i in range(n):
            if s[i] in vow:
                state ^= 1 << vow.index(s[i])

            if state in seen:
                big = max(big, i - seen[state])
            else:
                seen[state] = i

        return big