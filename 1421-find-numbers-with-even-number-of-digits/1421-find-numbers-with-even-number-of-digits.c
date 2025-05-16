int findNumbers(int* nums, int numsSize) {
    
    int count = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if( (10 <= nums[i] && nums[i] < 100) ||
            (1000 <= nums[i] && nums[i] < 10000) ||
            (100000 <= nums[i] && nums[i] < 1000000) )
        {
            count++;
        }

    }

    return count;
}