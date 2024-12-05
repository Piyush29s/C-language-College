#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;

    ptr = &num; // Assign the address of num to ptr

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr (address of num): %p\n", ptr);
    printf("Value at the address pointed to by ptr: %d\n", *ptr);

    return 0;
}