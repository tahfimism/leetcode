#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findEvenNumbers(int* digits, int digitsSize, int* returnSize) 
{
    // Allocate enough memory (maximum 450 valid 3-digit even numbers)
    int* result = (int*) malloc(450 * sizeof(int));
    int count = 0; // To keep track of how many valid numbers we find

    // Frequency of each digit in the input array
    int inputFreq[10] = {0}; // inputFreq[d] = how many times digit 'd' appears

    for (int i = 0; i < digitsSize; i++) {
        inputFreq[digits[i]]++;
    }

    // Try all possible 3-digit even numbers: from 100 to 998 (even numbers only)
    for (int num = 100; num <= 998; num += 2) {
        // Break the number into individual digits
        int hundreds = num / 100;          // First digit
        int tens = (num / 10) % 10;        // Second digit
        int ones = num % 10;               // Last digit — must be even

        // Count frequency of digits in this number
        int numFreq[10] = {0};             // Frequency of digits in 'num'
        numFreq[hundreds]++;
        numFreq[tens]++;
        numFreq[ones]++;

        // Check if input has enough digits to form this number
        int canForm = 1; // Assume yes
        for (int d = 0; d < 10; d++) {
            if (numFreq[d] > inputFreq[d]) {
                canForm = 0; // Not enough of digit 'd'
                break;
            }
        }

        // If digits are available, add the number to result
        if (canForm) {
            result[count++] = num;
        }
    }

    // Set the return size as required by LeetCode
    *returnSize = count;

    return result;
}
