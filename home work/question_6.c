#include <stdio.h>
#include <math.h>

int main()
{
    int x, n;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i = 1;
    float sum = 0.0;

    while (i <= n)
    {
        sum = sum + pow(x, i); // Calculate x to the power of i and add to sum
        i++;
    }

    printf("The sum of the series is: %.2f\n", sum);
    return 0;
}
