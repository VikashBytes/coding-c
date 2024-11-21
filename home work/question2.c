#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the Value of N: ");
    scanf("%d", &n);

    int i = 1;
    double sum = 0.0; // Change the sum to a double to handle floating-point numbers

    while (i <= n)
    {
        sum = sum + sqrt(i);
        i++;
    }

    printf("The value is: %.2f\n", sum); // Use %.2f to print the sum with 2 decimal places

    return 0;
}
