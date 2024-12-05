#include <stdio.h>
void tower(int n, char source, char helper, char destination){
    if (n == 0) return; // Base Case
    tower(n-1, source, destination, helper);
    printf("%c --> %c\n",source , destination); // Sabse badi wali disk to A - C move krwane wala step
    tower(n-1, helper, source, destination); 
    return;
}
int main ()
{
    int n;
    printf("Enter no. of disk : ");
    scanf("%d", &n);

    tower(n, 'A', 'B', 'C');
    return 0;
}