#include<stdio.h>

void area();

int main()
{
    area();

    return 0;
}

void area()
{
    float base, height, area;

    printf("Enter the value of Base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the value of Height of the triangle: ");
    scanf("%f", &height);

    area=(base*height)/2;

    printf("The area of traingle is %.1f", area);

    return area;



}