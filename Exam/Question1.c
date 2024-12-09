#include <stdio.h>
int main(){
int n,sum=0,lastdigit;
printf("Enter the number : ");
scanf("%d",&n);
while (n%10!=0)
{
   lastdigit = n%10;
    sum = lastdigit+sum;
    n = n/10;

}

printf("%d",sum);
    return 0;
}