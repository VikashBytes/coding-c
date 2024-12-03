#include <stdio.h>
int main()
{
    int a = 24;
    int *x = &a;
    *x= 7;
    printf("%p\n", x);
    printf("%p\n", &a);
    printf("%d", *x);
    return 0;
}