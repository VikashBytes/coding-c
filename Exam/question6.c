#include <stdio.h>
int main(){
int n = 5000;
for (int i = 5; i < n-1; i++)
{
    if (n%i==0 && n%2==0)
    {
        printf("%d\n",i);
    }
    
}

    return 0;
}