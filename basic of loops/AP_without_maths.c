#include <stdio.h>
// HW : Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
int a = 4;
for (int i = 1; i <=n; i++)
{
    a = a+3;
    printf("%d ",a); 

}
return 0;
}