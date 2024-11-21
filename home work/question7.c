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
       sum = sum + 1.0/i+1.0/(i+1);
        i++;
    }
    printf("The value is: %.2f\n", sum);
    return 0;
}
