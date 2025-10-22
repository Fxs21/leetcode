#include "solution.h"

/**
 * single check func
 */
static bool check_two_sum(int *nums, int numsSize, int target, int *exp_arr, int exp_size)
{
    int return_size = 0;
    int *return_arr = twoSum(nums, numsSize, target, &return_size);
    if (!return_arr) {
        printf("return arr is NULL\n");
        return false;
    }

    if (return_size != exp_size) {
        printf("return size != expect size\n");
        return false;
    }

    bool cmp = memcmp(return_arr, exp_arr, return_size * sizeof(int)) == 0;
    printf("return_arr: ");
    for (int i = 0; i < return_size; i++) {
        printf("%d, ", return_arr[i]);
    }
    printf("\n");

    printf("expect_arr: ");
    for (int i = 0; i < exp_size; i++) {
        printf("%d, ", exp_arr[i]);
    }
    printf("\n");

    free(return_arr);
    return cmp;
}

/**
 * total test func
 */
typedef struct {
    int *arr;
    int arr_size;
    int target;
    int *exp_arr;
    int exp_size;
} ctx;

void test_two_sum(void)
{
    ctx ctx = {0};

    ctx.arr = (int []){2, 7, 11, 15};
    ctx.arr_size = 4;
    ctx.target = 9;
    ctx.exp_arr = (int []){0, 1};
    ctx.exp_size = 2;
    assert(check_two_sum(ctx.arr, ctx.arr_size, ctx.target, ctx.exp_arr, ctx.exp_size));
    printf("case1 pass\n\n");

    ctx.arr = (int []){3, 2, 4};
    ctx.arr_size = 3;
    ctx.target = 6;
    ctx.exp_arr = (int []){1, 2};
    ctx.exp_size = 2;
    assert(check_two_sum(ctx.arr, ctx.arr_size, ctx.target, ctx.exp_arr, ctx.exp_size));
    printf("case2 pass\n\n");

    ctx.arr = (int []){3, 3};
    ctx.arr_size = 2;
    ctx.target = 6;
    ctx.exp_arr = (int []){0, 1};
    ctx.exp_size = 2;
    assert(check_two_sum(ctx.arr, ctx.arr_size, ctx.target, ctx.exp_arr, ctx.exp_size));
    printf("case3 pass\n\n");
}
