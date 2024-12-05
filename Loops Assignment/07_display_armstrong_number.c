#include <stdio.h>

int main() {
    int start, end, num, originalNum, remainder, n = 0, result = 0;

    printf("Enter the starting and ending numbers: ");
    scanf("%d %d", &start, &end);

    // Iterate through each number in the range
    for (num = start; num <= end; num++) {
        originalNum = num;

        // Calculate the number of digits
        while (originalNum != 0) {
            originalNum /= 10;
            ++n;
        }

        originalNum = num;

        // Calculate the sum of the cubes of digits
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        // Check if the number is an Armstrong number
        if (result == num) {
            printf("%d is an Armstrong number.\n", num);
        }

        n = 0;
        result = 0;
    }

    return 0;
}