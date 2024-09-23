#include <stdio.h>
int main(){
int x;
printf("enter your number");
scanf("%d",&x);

if (x%5==0)
{
  if (x%3==0)
  {
    printf("the number is divisible by 3 and 5 :");
  }
  
}
else
{
    printf("it is not divisible : ");
}

    return 0;
}