#include <stdio.h>
// Take 3 positive integers input and print
// the greatest of them.
int main()
{
    int a, b, c;
    printf("Enter the value of a  : ");
    scanf("%d", &a);

    printf("Enter the value of b  : ");
    scanf("%d", &b);

    printf("Enter the value of c  : ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf(" a is greatest number : %d", a);
    }

    if (b > c && b > a)
    {
        printf(" b is greatest number : %d", b);
    }
    if (c > a && c > b)
    {
        printf(" c is greatest number : %d", c);
    }
    else
    {
        printf("no number is greater : ");
    }

    return 0;
}