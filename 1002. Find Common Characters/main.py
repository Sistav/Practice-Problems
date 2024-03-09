class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        l = list(words[0])
        for i in range(1, len(words)):
            temp_l = l.copy()
            l = []
            for x in words[i]:
                if x in temp_l:
                    l.append(x)
                    temp_l.remove(x)
        return l
