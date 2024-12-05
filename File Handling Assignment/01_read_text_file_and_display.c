#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Open the file in read mode
    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Read and print each character from the file
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}