#include<stdio.h>
// Ques : Swap 2 numbers
int main(){
int a,b,temp;
printf("Enter a : ");
scanf("%d",&a);
printf("Enter b : ");
scanf("%d", &b);
temp = a;
a=b;
b=temp;
printf("the value of a is %d\n",a);
printf("the value of b is %d", b);
return 0;
}