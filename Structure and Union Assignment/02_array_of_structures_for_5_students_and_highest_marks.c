#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i, highest_index;
    float highest_marks;

    // Input details for 5 students
    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Find the student with the highest marks
    highest_marks = students[0].marks;
    highest_index = 0;
    for (i = 1; i < 5; i++) {
        if (students[i].marks > highest_marks) {
            highest_marks = students[i].marks;
            highest_index = i;
        }
    }

    printf("\nStudent with the highest marks:\n");
    printf("Name: %s\n", students[highest_index].name);
    printf("Roll Number: %d\n", students[highest_index].roll_no);
    printf("Marks: %.2f\n", students[highest_index].marks);

    return 0;
}