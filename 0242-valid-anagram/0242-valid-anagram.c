bool isAnagram(char* s, char* t) {

    // string length
    int slen = strlen(s);
    int tlen = strlen(t);

    // frequencey array
    int freq[26] = {0};

    if (slen != tlen)
        {
          return false;
        }

    for(int i = 0; i < slen; i++)
    {
        freq[s[i] - 'a']++;
    }

    for(int i = 0; i < tlen; i++)
    {
        freq[t[i] - 'a']--;
    }

    for(int i = 0; i < 26; i++)
    {
        if(freq[i] != 0 )
        {
            return false;
        }
    }

    return true;
}