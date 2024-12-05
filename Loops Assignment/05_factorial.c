#include <stdio.h>

int main() {
    int n, i, factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Calculate the factorial using a loop
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %d\n", n, factorial);

    return 0;
}