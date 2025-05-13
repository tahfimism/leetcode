#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    //allocate
    int *result = malloc(2 * sizeof(int));
    *returnSize = 2;

    // brute force
    for (int i = 0; i < numsSize; i++)
    {
        for( int j = i +1; j < numsSize; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    free(result);
    return NULL;
}
