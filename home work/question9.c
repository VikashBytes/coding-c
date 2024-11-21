#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the Value of N: ");
    scanf("%d", &n);

    int i = 1;
    float sum = 0.0;

    while (i <= n)
    {
        if (i-n != 0)
        {
            sum = sum + 1.0 / (n - i);
        }
        i++;
    }
    printf("The value is: %f\n", sum);
    return 0;
}
