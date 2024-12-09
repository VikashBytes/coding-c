#include <stdio.h>
int main(){
int a=1,b=1,sum=1;
int n;
printf("Enter terms : ");
scanf("%d",&n);
for (int i = 1; i <=n; i++)
{
    sum = a+b;
    printf("%d ",a);
    a=b;
    b=sum;
}

    return 0;
}