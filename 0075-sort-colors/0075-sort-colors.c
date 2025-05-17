void sortColors(int* nums, int numsSize) {
    
    int nred = 0;
    int nwhite = 0;
    int nblue = 0;

    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] == 0)
        {
            nums[nred++] = 0;
        }
        else if(nums[i] == 1) nwhite++;
        else nblue++;
    }

    for (int i = 0; i < nwhite; i++)
    {
        nums[nred++] = 1;
    }

    for (int i = 0; i < nblue; i++)
    {
        nums[nred++] = 2;
    }
}