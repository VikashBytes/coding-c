// #include <stdio.h>
// #include <math.h>
// int main()
// {
//  printf("Enter the 1st number : ");
//  int n;
//  scanf("%d",&n);
// int sum =0;
//  int n2;
//  printf("Enter the 2nd nummber :");
//  scanf("%d",&n2);
// sum = pow(n,n2);
// printf("The value is %d",sum);

// }
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the base : ");
    scanf("%d", &a);
    printf("Enter the exponent : ");
    scanf("%d", &b);
    int sum = 1;
    for (int i = 1; i <= b; i++)
    {
        sum = sum * a;
    }
    printf("The value is %d", sum);
    return 0;
}