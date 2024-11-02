#include<stdio.h>
int main(){
int n,a;
printf("Enter the nmber : ");
scanf("%d",&n); 
a = 4;
for (int i = 1; i <=n; i++)
{
    printf("%d ",a);
    a = a + 3;
}

    return 0;
}