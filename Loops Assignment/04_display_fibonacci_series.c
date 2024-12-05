#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the first two terms
    printf("Fibonacci Series: %d, %d, ", t1, t2);

    // Generate and print the next terms
    for (i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}