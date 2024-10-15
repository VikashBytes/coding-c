#include <stdio.h>
// Ques : Display this GP - 1, 2, 4, 8, 16, 32, ..upto ‘n’ terms.
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        a = a * 2;
        printf("%d ", a);
    }

    return 0;
}