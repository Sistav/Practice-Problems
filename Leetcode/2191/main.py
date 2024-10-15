class Solution:
    def map_number(num, mapping):
        mapped_str = ''.join(str(mapping[int(digit)]) for digit in str(num))
        return int(mapped_str)

    def sortJumbled(self, mapping: List[int], nums: List[int]) -> List[int]:
        mapped_nums = [(Solution.map_number(num, mapping), num) for num in nums]
        mapped_nums.sort(key=lambda x: x[0])
        sorted_nums = [original for mapped, original in mapped_nums]
        return sorted_nums



