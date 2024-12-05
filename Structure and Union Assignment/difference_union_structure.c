#include <stdio.h>
#include <string.h>

// Define a structure for a student
struct Student {
    char name[50];    // Character array to store the name
    int roll_no;      // Integer to store the roll number
    float marks;     // Float to store the marks
};

// Define a union for a student
union StudentUnion {
    char name[50];    // Character array to store the name
    int roll_no;      // Integer to store the roll number
    float marks;     // Float to store the marks
};

int main() {
    struct Student s1;  // Create a structure variable
    union StudentUnion u1;  // Create a union variable

    // Assign values to the structure members
    strcpy(s1.name, "Alice");
    s1.roll_no = 10;
    s1.marks = 95.5;

    // Assign values to the union members
    strcpy(u1.name, "Bob");
    u1.roll_no = 20;

    // Access and print the values of the structure members
    printf("\nStudent Details (Structure):\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Marks: %.2f\n", s1.marks);

    // Access and print the values of the union members
    printf("\nStudent Details (Union):\n");
    printf("Name: %s\n", u1.name);
    printf("Roll Number: %d\n", u1.roll_no);
    // Since the last assigned member was u1.roll_no, it will be printed
    printf("Marks: %.2f\n", u1.marks); 

    return 0;
}