#include <stdio.h>

int main() {
    int n, i, num, count = 0, arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find frequency: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    printf("Frequency of %d: %d\n", num, count);

    return 0;
}