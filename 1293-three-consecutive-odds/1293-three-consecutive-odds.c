bool threeConsecutiveOdds(int* arr, int arrSize) 
{
    for (int i = 0; i < arrSize - 2; i++) 
    {
        if (arr[i] % 2 == 1 && arr[i+1] % 2 == 1 && arr[i+2] % 2 == 1) 
        {
            return true;
        }
    }
    return false;
}