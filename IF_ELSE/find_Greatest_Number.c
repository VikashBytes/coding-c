#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter 1st number");
    scanf("%d", &a);

    printf("enter 2nd number");
    scanf("%d", &b);

    printf("enter 3rd number");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        if (b > a && b > c)
        {
            printf("2nd number is greatest");
        }

        printf("1st number is greatest");
    }
    else
    {
        printf("3rd number is greatest");
    }
    return 0;
}