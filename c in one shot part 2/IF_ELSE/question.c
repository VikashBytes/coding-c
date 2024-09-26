#include <stdio.h>
int main(){
    //Take positive integer input and tell if it is divisible by 5 or not.
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