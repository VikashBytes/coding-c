#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    printf("Enter the base : ");
    scanf("%d", &a);
    printf("Enter the exponent : ");
    scanf("%d", &b);
    int sum = 1;
    for (int i = 1; i <= b; i++)
    {
        sum = pow(a, i);
        printf("The value is %d\n", sum);
    }
    return 0;
}