#include <stdio.h>
//find the armstrong number between 10 to 1000
int main()
{
    int n, sum = 0, ld,a ;
    printf("running");
    for (int i = 1; i < 10000; i++)
    {
        a= i;
        for (int j = 2; a !=0; j++)
        {
    
            ld = a % 10;
            sum = ld * ld * ld + sum;
            a = a / 10;
            
        }
        if (sum==a)
        {
            printf("The number is : %d\n", sum);
        }
       sum = 0;
    }

    return 0;
}