class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        d = {}
        for word in s1.split() + s2.split():
            if word in d.keys():
                d[word] += 1
            else:
                d[word] = 1
        out = []
        for word, app in d.items():
                if app == 1:
                    out.append(word)
        return out
