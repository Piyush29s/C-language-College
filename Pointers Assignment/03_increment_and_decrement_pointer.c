#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Initial value of ptr: %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    ptr++; // Increment ptr to point to the next element
    printf("After incrementing ptr: %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    ptr--; // Decrement ptr to point to the previous element
    printf("After decrementing ptr: %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}