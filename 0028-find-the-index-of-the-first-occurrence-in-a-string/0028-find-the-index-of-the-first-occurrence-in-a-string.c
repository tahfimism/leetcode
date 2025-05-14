#include <string.h>
#include <ctype.h>

int strStr(char* haystack, char* needle) {
    int h_len = strlen(haystack);
    int n_len = strlen(needle);
    
    for(int i = 0; i < h_len - n_len +1; i++)
    {
        bool match = true;
        for (int j = 0; j < n_len; j++)
        {
            if(needle[j] != haystack[i+j])
            {
                match = false;
                break;
            }
        }

        if(match == true)
        {
            return i;
        }
    }
    return -1;
}