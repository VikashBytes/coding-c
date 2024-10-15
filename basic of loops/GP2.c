#include <stdio.h>
// HW : Display this GP - 3, 12, 48, ..upto ‘n’ terms.
int main()
{
    int n, a;
    printf("Enter the number : ");
    scanf("%d", &n);
    a = 3;
    printf("%d ", a);
    for (int i = 1; i <= n; i++)
    {
        a = a * 4;
        printf("%d ", a);
    }

    return 0;
}