from functools import cmp_to_key

def compare(a, b):
    str1 = str(a) + str(b)
    str2 = str(b) + str(a)
    return (str2 > str1) - (str1 > str2)

class Solution:
    def largestNumber(self, nums: List[int]) -> str:
        nums = sorted(nums, key=cmp_to_key(compare))
        largest_num = ''.join(map(str, nums))
        return largest_num if largest_num[0] != '0' else '0'