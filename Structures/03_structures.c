#include<stdio.h>
#include<string.h>

struct student {
    float marks;
    int rollno;
    char name[100];
};

int main()
{                
    struct student s1 ={98,12,"ashish"};   // intialising method
    printf("student name is:%s\n",s1.name);
    printf("student marks are:%f\n",s1.marks);
    printf("student roll no. is:%d\n",s1.rollno);

    struct student *ptr = &s1;      //pointers method
    printf("student name  with ptr : %s\n",(*ptr).name);
    printf("student marks with ptr : %f\n",(*ptr).marks);
    printf("student roll no. with ptr : %d\n",(*ptr).rollno);

    printf("student name  with arrow : %s\n",ptr->name);  //arrow method
    printf("student marks with arrow: %f\n",ptr->marks);
    printf("student roll no. with arrow : %d\n",ptr->rollno);

    
    


    return 0;
}