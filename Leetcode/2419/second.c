int longestSubarray(int* nums, int numsSize) {
    int big_j = 0;
    int big_i = 0;
    int biggest = 0;
    int current = -1;  
    int start = 0;
    int test = 0;

    for (int j = 0; j < numsSize; j++) {
        if (nums[j] > current) {
            start = j;
            test = j;
            current = nums[j];
        } else {
            current &= nums[j];
        }

        while (start < j && (nums[start] & current) == current) {
            start++;
        }

        if (current > biggest || (current == biggest && j - test + 1 > big_j - big_i)) {
            biggest = current;
            big_i = test;
            big_j = j + 1;  
        }
    }

    return big_j - big_i;

}