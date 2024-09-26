#include <stdio.h>
// Take 3 positive integers input and print
// the greatest of them.
int main()
{
    int a, b, c, d;
    printf("Enter the value of a  : ");
    scanf("%d", &a);

    printf("Enter the value of b  : ");
    scanf("%d", &b);

    printf("Enter the value of c  : ");
    scanf("%d", &c);

    printf("Enter the value of d  : ");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf(" a is greatest number : %d", a);
    }
    if (b > a && b > c && b > d)
    {
        printf(" b is greatest number : %d", b);
    }
    if (c > a && c > b && c > d)
    {
        printf(" c is greatest number : %d", c);
    }
    if (d > a && d > b && d > c)
    {
        printf(" d is greatest number : %d", d);
    }

    return 0;
}