// Write a C program that defines a function which takes two integers as arguments and returns their greatest common divisor (GCD). In the main() function, prompt the user to input two integers, pass them to the GCD function, and display the returned result.

#include <stdio.h>

// Function prototype for GCD calculation
int gcd(int a, int b);  // Declaring the GCD function

int main()
{
    int num1, num2, result;

    // Prompt user to input two integers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);  // Reading two integers from the user

    // Call gcd() function to compute the GCD of the two numbers
    result = gcd(num1, num2);

    // Print the result
    printf("The GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}

// Function to calculate GCD using Euclid's Algorithm
int gcd(int a, int b)
{
    // Base case: if second number (b) is 0, return the first number (a) as the GCD
    if (b == 0)
        return a;

    // Recursive case: call gcd with (b, a % b) until b becomes 0
    return gcd(b, a % b);
}
