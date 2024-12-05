#include <stdio.h>
#include <math.h>

float discriminant(float a, float b, float c)
{
    return (b * b) - (4 * a * c);
}
float root1(float a, float b, float disc)
{
    return (-b + sqrt(disc)) / (2 * a);
}
float root2(float a, float b, float disc)
{
    return (-b - sqrt(disc)) / (2 * a);
}

int main()
{
    float a, b, c, disc, r1, r2;
    printf("enter coefficients a,b and c:");

    scanf("%f %f %f", &a, &b, &c);
    disc = discriminant(a, b, c);

    if (disc > 0)
    {
        r1 = root1(a, b, disc);
        r2 = root2(a, b, disc);

        printf("roots are real and different. \n");
        printf("Root 1=%.2f \n", r1);
        printf("Root 2=%.2f \n", r2);
    }

    else if (disc == 0)
    {
        r1 = root1(a, b, disc);
        printf("roots are real and equal. \n");
        printf("Root 1=Root 2= %.2f \n", r1);
    }
    else
    {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-disc) / (2 * a);

        printf("roots are complex. \n");

        printf("Root 1= %.2f + %.2fi \n", realPart, imaginaryPart);
        printf("Root 2=  %.2f - %.2fi \n", realPart, imaginaryPart);
    }
    return 0;
}