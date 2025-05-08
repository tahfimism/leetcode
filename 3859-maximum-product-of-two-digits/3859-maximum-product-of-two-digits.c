int maxProduct(int n)
{
    int num[10];
    int temp = n;
    int i = 0;
    int p = 0;
    do
    {
        int digit = temp % 10;
        temp = temp /10;

        num[i] = digit;
        i++;
    }
    while(temp > 0);

    for(int j = 0; j < i; j++)
    {
        for(int k = 0; k < i; k++)
        {

            if(j == k)
            {
                continue;
            }
            int product = num[j] * num[k];
            if (product > p)
                p = product;
        }
    }

    return p;
}
