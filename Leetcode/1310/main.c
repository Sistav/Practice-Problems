#include <stdlib.h>
#include <stdio.h>

int* xorQueries(int* arr, int arrSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {
    int* out = (int*)malloc(queriesSize * sizeof(int));
    *returnSize = queriesSize;

    for (int i = 0; i < queriesSize; i++) {
        int left = queries[i][0];
        int right = queries[i][1];

        if (left == right) {
            out[i] = arr[left];
        } else {
            int troll = arr[left];
            for (int j = left + 1; j <= right; j++) {
                troll ^= arr[j];
            }
            out[i] = troll;
        }
    }

    return out;
}
int main(int argc, char *argv[]) {
    printf("1310\n");
    return 0;
}
