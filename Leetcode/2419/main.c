int and_a_range(int* nums, int begin, int end) {
    int retn = nums[begin];
    for (int k = begin + 1; k < end; k++) {
        retn &= nums[k];
    }
    return retn;
}

int longestSubarray(int* nums, int numsSize) {
    int big_j = -1;
    int big_i = -1;
    int biggest = -1;
    int current;
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j <= numsSize; j++) {
            current = and_a_range(nums, i, j);
            if (current > biggest || (current == biggest && (j - i) > (big_j - big_i))) {
                big_j = j;
                big_i = i;
                biggest = current;
            }
        }
    }
    if (biggest == 0) {
        return 0;
    }
    return (big_j - big_i);
}