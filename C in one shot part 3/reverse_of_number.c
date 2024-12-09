#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    // int sum = 0;
    int lastdigit;
    while (n % 10 != 0)
    {
        lastdigit = n % 10;
        printf("%d", lastdigit);
        n = n / 10;
    }

    return 0;
}