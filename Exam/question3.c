#include <stdio.h>
int main()
{
    int n, ld = 0, reverse = 0;
    printf("Enter the number : ");
    scanf("%d", &n);

    while (n % 10 != 0)
    {
        ld = n % 10;
        reverse = reverse * 10 + ld ;
        n = n / 10;
    }

    printf("reverse = %d", reverse);
    return 0;
}