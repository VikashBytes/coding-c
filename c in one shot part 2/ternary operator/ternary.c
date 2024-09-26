#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    n % 2 == 0 ? printf("Even Number") : printf("Odd Number");
    // if (n % 2 == 0)
    //     printf("Even Number");
    // else
    //     printf("Odd Number");
    return 0;
}