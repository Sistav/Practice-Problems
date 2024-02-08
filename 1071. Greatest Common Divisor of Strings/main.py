class Solution(object):
    def gcdOfStrings(self, str1, str2):
        if str1 >= str2:
            bigger = str1
            smaller = str2
        for i in range(len(str1), 0, -1):
            substr = str1[0:i]
            fullstr = substr
            while (len(fullstr) < len(str2)):
                fullstr += substr
            if fullstr == str2:
                fullstr = ""
                while (len(fullstr) < len(str1)):
                    fullstr += substr
                if fullstr == str1:
                    return substr
        return ""

