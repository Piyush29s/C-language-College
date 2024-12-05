#include <stdio.h>
#include <math.h>

void power();

int main()
{

    power();

    return 0;
}

void power()
{
    int i, j, exponent;

    printf("Enter the base number: ");
    scanf("%d", &i);

    printf("Enter the exponent number: ");
    scanf("%d", &j);

    //Now we have taken i,j and we'll get i to the power j
    exponent = pow(i, j);
    printf("i to the power j is %d", exponent);
}