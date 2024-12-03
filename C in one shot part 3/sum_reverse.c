#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    // int sum = 0;
    int lastdigit;
    int reverse = 0;
    int sum;
    int number = n;
    while (n > 0)
    {
        lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n / 10;  
    }
    sum = number + reverse;
    printf("\nsum :%d", sum);
    return 0;
}