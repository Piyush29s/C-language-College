#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("source.txt", "r"); // Open the source file in read mode
    fp2 = fopen("destination.txt", "w"); // Open the destination file in write mode

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening files\n");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2); // Write the character to the destination file
    }

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully\n");

    return 0;
}