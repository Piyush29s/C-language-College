#include <stdio.h>

void decimalToBinary(int n) {
    if (n == 0) {
        return;
    }
    decimalToBinary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int n;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("Binary equivalent: ");
    decimalToBinary(n);
    printf("\n");

    return 0;
}