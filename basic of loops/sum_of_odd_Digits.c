#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int sum = 0;
    int lastdigit = 0;
    while (n % 10 != 0)
    {
        lastdigit = n % 10;
        if (lastdigit % 2 != 0)
        {
            sum = lastdigit + sum;
        }
        n = n / 10;
    }
    printf("The sum of even digits are %d", sum);
    return 0;
}