#include <stdio.h>
// Take positive integer input and tell if it
// is divisible by 5 or 3.
int main()
{
    int n;
    printf("Enter integer : ");
    scanf("%d", &n);
    if (n % 5 == 0 || n % 3 == 0)
    {
        printf(" ya, it is divisible : %d", n);
    }
    else
    {
        printf("no, it is not diviible : ");
    }

    return 0;
}