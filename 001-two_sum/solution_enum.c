#include "solution.h"

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *return_arr = (int *)malloc(2 * sizeof(int));
    if (!return_arr)
        return NULL;

    for (int i = 0; i < numsSize; i++)
        for (int j = i + 1; j < numsSize; j++)
            if (target == nums[i] + nums[j]) {
                *returnSize = 2;
                return_arr[0] = i;
                return_arr[1] = j;
                return return_arr;
            }

    *returnSize = 0;
    return NULL;
}
