class Solution:
    def isPalindrome(self, s: str) -> bool:

        letters = ""
        for i in s:
            if i.isalnum():
                letters += i
        return letters.lower() == letters.lower()[::-1]
