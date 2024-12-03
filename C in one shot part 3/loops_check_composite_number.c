#include <stdio.h>
int main()
{
    int n, a;
    printf("Enter the nmber : ");
    scanf("%d",&n);
    // a = 100;
    for (int i = 2; i <= n-1; i++)
    {
        if (n%i==0)
        {
            printf("the given number is composite ");
            break;
        }
        
    }
   
    return 0;
}