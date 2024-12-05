#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    // Open the file in write mode
    fp = fopen("file.txt", "w");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Get input from the user
    printf("Enter text to write to the file: ");
    fgets(str, 100, stdin);

    // Write the input to the file
    fprintf(fp, "%s", str);

    // Close the file
    fclose(fp);

    // Open the file in read mode
    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("Contents of the file:\n");

    // Read and print each line from the file
    while (fgets(str, 100, fp) != NULL) {
        printf("%s", str);
    }

    // Close the file
    fclose(fp);

    return 0;
}