#include <stdio.h>

int string_length(char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

void string_concatenate(char *str1, char *str2) {
    int len1 = string_length(str1);
    int len2 = string_length(str2);
    int i;

    for (i = 0; i < len2; i++) {
        str1[len1 + i] = str2[i];
    }
    str1[len1 + len2] = '\0';
}

void string_reverse(char *str) {
    int len = string_length(str);
    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void string_copy(char *dest, char *src) {
    int i;
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter string 1: ");
    scanf("%s", str1);

    printf("Enter string 2: ");
    scanf("%s", str2);

    printf("Length of string 1: %d\n", string_length(str1));

    string_concatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);

    string_reverse(str1);
    printf("Reversed string: %s\n", str1);

    string_copy(str2, str1);
    printf("Copied string: %s\n", str2);

    return 0;
}