#include<stdio.h>
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
for (int i = n; i <=n*10; i=n+i)
{
    printf("%d\n",i);
}


    return 0;
}