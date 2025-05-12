#include <stdlib.h>
#include <string.h>

// Helper to count digit frequency
void countDigits(int *arr, int size, int *freq) {
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findEvenNumbers(int* digits, int digitsSize, int* returnSize) {
    int *result = malloc(450 * sizeof(int));  // max possible 3-digit even numbers
    int count = 0;

    int inputFreq[10] = {0};
    countDigits(digits, digitsSize, inputFreq);

    for (int num = 100; num <= 998; num += 2) {
        int hundreds = num / 100;
        int tens = (num / 10) % 10;
        int ones = num % 10;

        int numFreq[10] = {0};
        numFreq[hundreds]++;
        numFreq[tens]++;
        numFreq[ones]++;

        int valid = 1;
        for (int d = 0; d < 10; d++) {
            if (numFreq[d] > inputFreq[d]) {
                valid = 0;
                break;
            }
        }
        if (valid) {
            result[count++] = num;
        }
    }

    *returnSize = count;
    return result;
}
