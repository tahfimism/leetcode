/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    
    // go thru each int, if its even - move it to front, if its odd - put it into another array
    int evenpos = 0;
    int oddpos = 0;

    int odds[numsSize];

    for (int i = 0; i < numsSize; i++)
    {
        if(nums[i] % 2 == 0){
            nums[evenpos++] = nums[i];
        }
        else{
            odds[oddpos++] = nums[i];
        }
    }

    for(int i = 0; i < oddpos; i++)
    {
        nums[evenpos++] = odds[i];
    }

    *returnSize = numsSize;
    return nums;
    
}