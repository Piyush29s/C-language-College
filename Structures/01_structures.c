#include<stdio.h>
#include<string.h>

struct student {
    float marks;
    int rollno;
    char name[100];
};

int main()
{
    struct student s1;
    s1.marks=98;
    s1.rollno=2;
    strcpy(s1.name,"ashish");

    printf("student name is:%s\n",s1.name);
    printf("student marks are:%f\n",s1.marks);
    printf("student roll no. is:%d\n",s1.rollno);


    struct student s2;
    s2.marks=96;
    s2.rollno=4;
    strcpy(s2.name,"nishant");

    printf("\nstudent name is:%s\n",s2.name);
    printf("student marks are:%f\n",s2.marks);
    printf("student roll no. is:%d\n",s2.rollno);


    return 0;
}