#include <stdio.h>
int main(){
    int n,a = 0;
    printf("Enter the number : ");
    scanf("%d",&n);

    for (int i = 2; i < n- 1; i++)
    {
       if (n%i==0)
       {
       a = 1;
       }
       break;
    }
    if(n==1){
        printf("The number is prime nor composite\n");
    }
    else if(a==0){
        printf("The number is prime\n");
    }
    else printf("It is not a prime number \n");
    return 0;
}