void reverseString(char* s, int sSize) {
    int half = sSize/2;
    for(int i = 0; i < half; i++)
    {
        char temp = s[i];
        s[i] = s[sSize-i-1];
        s[sSize-i-1] = temp;
    }
}