#include<stdio.h>
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
int a=1,b=1,sum=1;
for (int i = 1; i <=n-2; i++)
{
   sum = a + b;
   //printf("the %dth fibonacci is %d\n", i, sum);
   a=b;
   b=sum;
}
printf("the %dth fibonacci is %d",n, sum);
return 0;
}