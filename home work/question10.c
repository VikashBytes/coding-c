#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the Value of N: ");
    scanf("%d", &n);

    int i = 1;
    int sum = 0;
    int A = 0;
    while (i <= n)
    {
        A = 6*i;
        sum = sum + A;
        i++;
    }
    
    printf("The value is: %d\n", sum);
    return 0;
}
