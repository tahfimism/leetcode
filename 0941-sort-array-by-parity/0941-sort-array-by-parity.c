/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    
    // go thru each int, if its even - move it to front, if its odd - put it into another array
    int evenpos = 0;
    int oddpos = numsSize-1;

    int *result = malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        if(nums[i] % 2 == 0){
            result[evenpos++] = nums[i];
        }
        else{
            result[oddpos--] = nums[i];
        }
    }

  

    *returnSize = numsSize;
    return result;
    
}