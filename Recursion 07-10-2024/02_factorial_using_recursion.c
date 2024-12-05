#include <stdio.h>

int fact(int n);

int main()
{
    int number, result;

    printf("Enter the value of a Positive Integer: ");
    scanf("%d", &number);

    result = fact(number);

    printf("Factorial of the number is %d", result);

    return 0;
}

int fact(int n)
{
    if (n != 0)
    {
        return n * fact(n - 1);
    }
    else
    {
        return 1;
    }
}
