#include <stdio.h>

int main() {
    int n, i, num, found = 0, arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%d found at index %d\n", num, i);
    } else {
        printf("%d not found in the array\n", num);
    }

    return 0;
}