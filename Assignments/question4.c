#include <stdio.h>
int main()
{
    int n, ld = 0, rvrs = 0, temp;
    printf("Enter the number : ");
    scanf("%d", &n);
    temp = n;
    while (n % 10 != 0)
    {
        ld = n % 10;
        rvrs = rvrs * 10 + ld;
        n = n / 10;
    }
    if (temp == rvrs)
    {
        printf("The number is palindrome : %d", rvrs);
    }
    else
        printf("it is not  a palindrome number");

    return 0;
}