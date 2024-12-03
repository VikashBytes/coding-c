#include <stdio.h>
// Print hello world ‘n’ times. Take ‘n’ as
// input from user
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
for (int i = 1; i <=n; i++)
{
   printf("Hello\n");
}

    return 0;
}