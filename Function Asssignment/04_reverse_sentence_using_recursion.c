#include <stdio.h>

void reverseSentence(char *str) {
    if (*str == '\0') {
        return;
    }
    reverseSentence(str + 1);
    printf("%c", *str);
}

int main() {
    char str[100];

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    printf("Reversed sentence: ");
    reverseSentence(str);
    printf("\n");

    return 0;
}