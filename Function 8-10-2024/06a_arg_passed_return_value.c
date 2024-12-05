// Write a C program that defines a function which takes an integer as an argument and returns its cube. In the main() function, prompt the user to enter an integer, pass it to the cube function, and display the returned result.

#include <stdio.h>
#include <math.h>

void cube(int n);

int main()
{
    int n;
    printf("Enter the number for its Cube: ");
    scanf("%d", &n);

    cube(n);

    return 0;
}

void cube(int n)
{
    double power;

    power = pow(n, 3);
    printf("Cube of the number is %.2lf", power);
}