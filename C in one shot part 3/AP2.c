#include <stdio.h>
// HW : Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
for (int i = 4; i <=3*n+1; i=i+3)
{
    printf("%d ",i);
}

    return 0;
}