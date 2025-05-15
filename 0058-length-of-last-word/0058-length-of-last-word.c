int lengthOfLastWord(char* s) {
    
    int n = strlen(s);
    int count = 0;
    int c = 0;


    for (int i = 0; i < n; i++)
    {
        if(isblank(s[i]))
        {
            count = 0;
        }
        else if(isalpha(s[i]))
        {
            count++; 
            c = count;
        }
    }

    return c;
}