#include <stdio.h>
// Ques : Combination and Permutation.
//ex = n = 7, r = 3;

int factorial(int x){
int fact =1;
for (int i = 1; i <=x; i++)
{
    fact = fact*i;
}
    return fact;
}

int combination(int n,int r){
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}
int main(){
int n,r;
printf("Enter the value of n : ");
scanf("%d",&n);
printf("Enter the value of r : ");
scanf("%d",&r);

// int nfact = factorial(n);
// int rfact = factorial(r);

// int nrfact = factorial(n-r);

// int ncr;
// ncr = nfact/(rfact*nrfact);
// printf("The NCR : %d",ncr);
int ncr= combination(n,r);
printf("the ncr = : %d",ncr);
    return 0;
}