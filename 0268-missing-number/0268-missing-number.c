int missingNumber(int* nums, int numsSize) {
    
    int sum = 0;
    for(int i = 0; i < numsSize; i++)
    {
        sum += nums[i];
    }

    int sum2 = (numsSize * (numsSize + 1))/2;

    int missed = sum2 - sum;

    return missed;
}