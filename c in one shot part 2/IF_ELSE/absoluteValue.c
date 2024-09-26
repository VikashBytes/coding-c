#include <stdio.h>
int main(){
int n;
printf("Enter your integer : ");
scanf("%d",&n);
if (n<0)
{
  n = n * (-1);
}

printf("your number is : %d",n);



    return 0;
}