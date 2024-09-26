#include <stdio.h>
//Take positive integer input and tell if it
//is a three digit number or not.
int main(){
int n;
printf("enter a number :");
scanf("%d",&n);

if (n>99 && n<1000)
{
    printf("it is a three digit number : %d",n);
}
else
{
    printf("it is not a three digit number");
}

    return 0;
}