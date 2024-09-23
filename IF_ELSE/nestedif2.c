#include <stdio.h>
int main()
{
    // Take positive integer input and tell if it
    // is divisible by 5 or 3 but not divisible by 15.
    int x;
    printf("enter your number");
    scanf("%d", &x);

    if (x % 5 == 0 || x % 3 == 0)
    {
        if (x % 15 != 0)
        {
            printf("the number is divisible by 3 or 5 but not by 15 :");
        }
        else
        {
            printf("it is not divisible : ");
        }
    }
    else
    {
        printf("it is not divisible : ");
    }

    return 0;
}