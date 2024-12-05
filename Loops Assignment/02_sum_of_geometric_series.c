#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double a, r, sum = 0;

    printf("Enter the first term (a), common ratio (r), and number of terms (n): ");
    scanf("%lf %lf %d", &a, &r, &n);

    // Calculate the sum of the geometric series using the formula
    for (int i = 0; i < n; i++) {
        sum += a * pow(r, i);
    }

    printf("Sum of the geometric series: %.2lf\n", sum);

    return 0;
}