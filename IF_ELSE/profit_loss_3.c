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
    printf("profit = %d\n",profit);
}

else if (cp > sp){
    loss = cp - sp;
    printf("loss = %d\n",loss);
}

else
{
    printf("no loss, no profit\n");
}
    return 0;
}