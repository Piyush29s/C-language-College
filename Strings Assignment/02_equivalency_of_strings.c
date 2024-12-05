#include <stdio.h>

int are_equal(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return 0;
        }
        str1++;
        str2++;
    }
    return *str1 == *str2;
}

int main() {
    char str1[100], str2[100];

    printf("Enter string 1: ");
    scanf("%s", str1);

    printf("Enter string 2: ");
    scanf("%s", str2);

    if (are_equal(str1, str2)) {
        printf("The strings are equal\n");
    } else {
        printf("The strings are not equal\n");
    }

    return 0;
}