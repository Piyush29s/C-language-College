// Write a C program that defines a function which takes two integers as arguments and returns their greatest common divisor (GCD). In the main() function, prompt the user to input two integers, pass them to the GCD function, and display the returned result.

#include<stdio.h>
int gcd(int a, int b);

int main()
{
    int num1, num2, result;
    printf("Enter the First number: ");
    scanf("%d", &num1);

    printf("Enter the Second number: ");
    scanf("%d", &num2);

    // Passing the numbers to GCD function and calling it
    result = gcd(num1, num2);

    printf("\nThe GCD value of %d and %d is %d", num1, num2, result);
    return 0;
}

int gcd(int a, int b)
{
    int gcd_value = 1; // Initializnig gcd value equal to 1

    int min_num = (a < b) ? a : b; // Find the smaller of two

    for (int i = 1; i <= min_num; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd_value = i; // Updating the value of gcd
        }
    }

    return gcd_value;
}