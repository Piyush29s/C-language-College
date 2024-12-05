#include<stdio.h>

void simpleInterest();

int main()
{
    simpleInterest();
    return 0;
}


void simpleInterest()
{
    float principal, rate, interest, time;

    printf("Enter the Principal amount: ");
    scanf("%f", &principal);

    printf("\nEnter the Rate of Interest: ");
    scanf("%f", &rate);

    printf("\nEnter the Period of Time: ");
    scanf("%f", &time);

    interest = (principal*time*rate)/100;

    printf("\nThe Simple Interest on the Principal Amount is %.0f", interest);
}