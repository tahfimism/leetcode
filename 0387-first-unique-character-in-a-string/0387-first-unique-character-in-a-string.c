int firstUniqChar(char* s) {
    int freq[26] = {0};               // Frequency array for 'a' to 'z'
    int n = strlen(s);                // length of string

    for (int i = 0; i < n; i++) {     // First pass: count frequencies
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < n; i++) {     // Second pass: find first unique
        if (freq[s[i] - 'a'] == 1) {
            return i;
        }
    }

    return -1;                        // No unique character found
}