#include<stdio.h>
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
int fn = 1;
int store = 0;
for (int i = 1; i <=n; i++)
{
    store = i;
    printf("%d\n", fn);
    fn = fn+store;
    
}

    return 0;
}