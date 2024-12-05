#include <stdio.h>
#include <string.h>

void reverse_sentence(char *str, int start, int end) {
    if (start >= end) {
        return;
    }

    // Swap the characters at the current start and end positions
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursively reverse the remaining parts of the sentence
    reverse_sentence(str, start + 1, end - 1);
}

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the newline character from the input
    int len = strlen(sentence) - 1;
    if (sentence[len] == '\n') {
        sentence[len] = '\0';
    }

    // Reverse the sentence using recursion
    reverse_sentence(sentence, 0, len - 1);

    printf("Reversed sentence: %s\n", sentence);

    return 0;
}