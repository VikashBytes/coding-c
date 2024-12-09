#include <stdio.h>
int main()
{
    int a = 0;
    for (int i = 5; i < 5000; i++)
    {
        for (int j = 2; j < i - 1; j++)
        {
            if (i % j == 0)
            {
                a = 1;
            }
            
        }
        if (a == 0)
        {
            printf("The number is prime : %d\n",i);
        }
        a = 0;
    }
    

    return 0;
}