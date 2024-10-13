#include <stdio.h>
// HW : Print the table of ‘n’. Here ‘n’ is a integer
// which user will input.
int main(){
int n;
printf("Enter the number : ");
scanf("%d",&n);
for (int i = n; i <=n*10; i=n+i)
{
    printf("%d\n",i);   
}
return 0;
}