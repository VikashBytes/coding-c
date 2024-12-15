#include <stdio.h>

int main()
{
    int n;
    float sum = 0.0, fact = 1.0;
    printf("Enter the term: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum = sum + (float)i / fact;
    }

    printf("Sum = %.2f\n", sum);
    return 0;
}
