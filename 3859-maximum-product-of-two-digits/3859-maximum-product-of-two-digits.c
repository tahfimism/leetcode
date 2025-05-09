int maxProduct(int n)
{

 int temp = n;
    int i = 0;

    int max1 = 0;
    int max2 = 0;

    do
    {
        int digit = temp % 10;
        temp = temp / 10;

        if(digit >= max1)
        {
            max2 = max1;
            max1 = digit;
        }
        else if(digit > max2)
        {
            max2 = digit;
        }

    }
    while(temp > 0);

    return max1*max2;
}
