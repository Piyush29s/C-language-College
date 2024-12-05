#include<stdio.h>
#include<string.h>

struct student {
    float marks;
    int rollno;
    char name[100];
};

int main()
{                // initialising structures
    struct student s1 ={98,12,"ashish"};
   
    printf("student name is:%s\n",s1.name);
    printf("student marks are:%f\n",s1.marks);
    printf("student roll no. is:%d\n",s1.rollno);


    struct student s2 ={97,13,"nishant"};
    struct student s3 ={0};


    printf("\nstudent name is:%s\n",s2.name);
    printf("student marks are:%f\n",s2.marks);
    printf("student roll no. is:%d\n",s2.rollno);


    return 0;
}