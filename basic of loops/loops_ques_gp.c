#include <stdio.h>
int main()
{
    float n, a;
    printf("Enter the nmber : ");
    scanf("%f", &n);
    a = 100;
    for (int i = 1; i <= n; i++)
    {
        printf("%.2f ", a);
        a = a/2;
    }

    return 0;
}