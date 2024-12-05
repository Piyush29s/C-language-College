#include <stdio.h>

int count_words(char *str) {
    int count = 0, i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ') {
            count++;
        }
    }

    if (str[0] != ' ') {
        count++;
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    printf("Number of words: %d\n", count_words(str));

    return 0;
}