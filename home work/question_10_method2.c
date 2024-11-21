#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i = 1, sum = 0, j;

    while (i <= n)
    {
        j = 0;
        while (j < 3)
        {
            sum += (i + j);
            j++;
        }
        i += 2;
    }

    printf("The sum of the series is: %d\n", sum);

    return 0;
}
