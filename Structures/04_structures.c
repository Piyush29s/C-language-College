#include <stdio.h>
#include <string.h>

// create struct with person1 variable
struct Person
{
    char name[50];
    int citNo;
    float salary;
};

int main()
{

    struct Person obj1;
    printf("Enter the name of first member %s\n", obj1.name);
    scanf("%s", &obj1.name);

    printf("Enter citNo of first memeber %d");

    
    struct Person obj2;
    printf("Enter the name of first member %s\n", obj2.name);
    scanf("%s", &obj2.name);

    

        return 0;
}