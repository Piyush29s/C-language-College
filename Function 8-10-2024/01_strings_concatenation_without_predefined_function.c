#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    int i, j;

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    
    for (i = 0; str1[i] != '\0'; i++);

    for (j = 0; str2[j] != '\0'; j++)

    {
        str1[i] = str2[j];
    }

    str1[i] = '\0';

    printf("Concatenated String: %s\n", str1);

    return 0;
}

