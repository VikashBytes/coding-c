#include <stdio.h>
#include <math.h>
int main(){
int n;
printf("Enter the Value of N :");
scanf("%d",&n);
int i=1,sum=0;
while (i<=n)
{
   sum = sum + i*i;
   i++;
}
printf("the value is : %d",sum);
    return 0;
}