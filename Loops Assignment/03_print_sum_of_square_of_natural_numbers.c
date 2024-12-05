#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the sum of squares of numbers from 1 to n
    for (i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("Sum of the series 1^2 + 2^2 + ... + %d^2 is %d\n", n, sum);

    return 0;
}