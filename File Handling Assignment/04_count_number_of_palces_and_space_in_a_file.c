#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int words = 0, spaces = 0;

    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == ' ') {
            spaces++;
        } else if (ch == '\n' || ch == '\t') {
            // Ignore newlines and tabs
        } else {
            if (spaces > 0) {
                words++;
                spaces = 0;
            }
        }
    }

    // Count the last word if the file doesn't end with a space
    if (spaces == 0 && ch != EOF) {
        words++;
    }

    fclose(fp);

    printf("Number of words: %d\n", words);
    printf("Number of spaces: %d\n", spaces);

    return 0;
}