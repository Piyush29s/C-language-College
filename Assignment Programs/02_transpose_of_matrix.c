#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    gets(name);  // read string
    puts(name);    // display string
    return 0;
}