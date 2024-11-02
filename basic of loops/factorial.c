#include<stdio.h>
int main(){
int n;
printf("Enter the number : ");
scanf("%d",&n);
int factorial = 1;
for (int i = 1; i <=n; i++)
{
    factorial = factorial * i;
}
// int i = 1;
// while (i<=n)
// {
//     factorial = factorial * i;
//     i++;
// }

printf("factorial : %d",factorial);
    return 0;
}