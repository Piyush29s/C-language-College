#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

union StudentUnion {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1;
    union StudentUnion u1;

    // Input details for the structure
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // Input details for the union
    printf("\nEnter name: ");
    scanf("%s", u1.name);
    printf("Enter roll number: ");
    scanf("%d", &u1.roll_no);
    printf("Enter marks: ");
    scanf("%f", &u1.marks);

    // Display details for the structure
    printf("\nStudent Details (Structure):\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Marks: %.2f\n", s1.marks);

    // Display details for the union
    printf("\nStudent Details (Union):\n");
    printf("Name: %s\n", u1.name);
    printf("Roll Number: %d\n", u1.roll_no);
    printf("Marks: %.2f\n", u1.marks);

    return 0;
}