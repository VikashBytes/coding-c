#include <stdio.h>
int main(){
int n;
printf("Enter the Number : ");
scanf("%d",&n);
if (n%5==0)
{
   printf("It is divisible by 5: ");
}
else
{
   printf("Not divisible by 5 : ");
}

    return 0;
}