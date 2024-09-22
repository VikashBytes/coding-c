#include <stdio.h>
int main(){
int cp, sp, profit, loss;
printf("Enter CP : ");
scanf("%d",&cp);

printf("Enter sp : ");
scanf("%d",&sp);
if (sp>cp)
{
    profit = sp - cp;
}
printf("profit = %d",profit);



    return 0;
}