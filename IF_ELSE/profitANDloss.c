#include <stdio.h>
int main(){
int cp, sp, profit, loss;
printf("Enter CP : ");
scanf("%d",&cp);

printf("Enter SP : ");
scanf("%d",&sp);

if (sp>cp)
{
  printf("wow, Profit : ");
}
if (cp>sp)
{
  printf("loss");
}
if (sp==cp)
{
    printf("no profit, no loss");
}

printf("\n");
if (sp>cp)
{
   profit = sp - cp;
}
printf("you have made profit of : %d",profit);

printf("\n");


    return 0;
}