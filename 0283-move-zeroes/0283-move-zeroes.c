void moveZeroes(int* nums, int numsSize) {
    

    int count = 0;  // count zero
    int c = 0;      // count position in temp

    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] != 0) 
        {
            nums[c] = nums[i];
            c++;
        } 
    }

    for(int i = c; i < numsSize; i++)
    {
        nums[i] = 0;
    }
    
    
}