#include <stdio.h>
int main(){
int x;
printf("enter your number");
scanf("%d",&x);

if (x%5==0 && x%3==0)
{
   printf("yes it is divisible by 5 & 3");
}

    return 0;
}