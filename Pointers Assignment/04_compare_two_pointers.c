#include <stdio.h>

int main() {
    int x = 10, y = 20;
    int *ptr1 = &x;
    int *ptr2 = &y;

    if (ptr1 == ptr2) {
        printf("ptr1 and ptr2 point to the same memory location\n");
    } else {
        printf("ptr1 and ptr2 point to different memory locations\n");
    }

    return 0;
}