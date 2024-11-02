#include <stdio.h>
int main()
{
    int n, a;
    // printf("Enter the nmber : ");
    // scanf("%d", &n);
    a = 100;
    for (int i = 1; a > 0; i++)
    {
        printf("%d ", a);
        a = a - 3;
        // printf("%d\n",i);
    }

    return 0;
}