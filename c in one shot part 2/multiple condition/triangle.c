#include <stdio.h>
int main(){
int a, b, c;
printf("enter the value of a : ");
scanf("%d",&a);

printf("enter the value of b :");
scanf("%d",&b);

printf("enter the value of c :");
scanf("%d",&c);

if (a+b>c && b+c>a && a+c>b)
{
   printf("yes, it is a triangle");
}
else
{
    printf("No, it is not a triangle ");
}

    return 0;
}