#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char line[100], new_line[100], temp[100];
    int line_no = 3, i = 1;

    fp = fopen("file.txt", "r+"); // Open the file in read-write mode

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("Enter the new line: ");
    fgets(new_line, 100, stdin);

    while (fgets(line, 100, fp) != NULL) {
        if (i == line_no) {
            fprintf(fp, "%s", new_line);
        } else {
            fprintf(fp, "%s", line);
        }
        i++;
    }

    fclose(fp);

    printf("Line replaced successfully\n");

    return 0;
}