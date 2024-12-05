// Write a C program that defines a function without arguments, but it returns the square of an integer. In the main() function, call the square function and display the returned result.

#include <stdio.h>
#include <math.h>

int square();

int main()
{
    int n;

    n = square();

    return 0;
}

int square()
{
    int n;
    double power;
    printf("Enter the number for squaring: ");
    scanf("%d", &n);

    power = pow(n, 2);
    printf("\nSquare of the number is %.2lf", power);

    return power;
}