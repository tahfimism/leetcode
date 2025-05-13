int lengthAfterTransformations(char* s, int t) {
    const int MOD = 1e9 + 7;
    long long count[26] = {0};

    // Count initial frequency of each character
    for (int i = 0, n = strlen(s); i < n; i++) {
        int c = s[i] - 'a';
        count[c]++;
    }

    // Perform t transformations
    for (int j = 0; j < t; j++) {
        long long temp[26] = {0};

        for (int k = 0; k < 25; k++) {
            temp[k + 1] = (temp[k + 1] + count[k]) % MOD;
        }

        // For 'z' -> "ab"
        temp[0] = (temp[0] + count[25]) % MOD;
        temp[1] = (temp[1] + count[25]) % MOD;

        // Update count array
        for (int i = 0; i < 26; i++) {
            count[i] = temp[i];
        }
    }

    // Calculate final length
    long long sum = 0;
    for (int i = 0; i < 26; i++) {
        sum = (sum + count[i]) % MOD;
    }

    return (int)sum;
}
