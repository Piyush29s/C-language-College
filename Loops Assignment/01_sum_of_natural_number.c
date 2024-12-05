#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Iterate from 1 to n and add each number to the sum
    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of the first %d natural numbers is %d\n", n, sum);

    return 0;
}