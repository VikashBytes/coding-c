// HW : Print the factorials of first ‘n’ numbers
#include <stdio.h>
int fact(int a)
{
    int factorial = 1;
    for (int i = 1; i <= a; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int main()
{
    int a;
    printf("Enter the value of A : ");
    scanf("%d", &a);

    int factorial = fact(a);
    printf("Factorial = %d", factorial);
    return 0;
}