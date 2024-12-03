#include <stdio.h>
#include <math.h>

int add(int x,int y){
return x+y;
}

int product(int x, int y)
{
    return x * y;
}

int sqrts(int x){
    return sqrt(x);
}

int powers(int x, int y){
    return pow(x,y);
}
int main(){
    int a,b;
    printf("Enter the 1st number :");
    scanf("%d",&a);
    printf("Enter the 2nd number :");
    scanf("%d", &b);

    int sum = add(a,b);
    int pro = product(a,b);
    int squareroot = sqrts(a);
    int power = powers(a,b);

    printf("add = %d\n",sum);
    printf("product = %d\n", pro);
    printf("square root of a = %d\n",squareroot);
    printf("power = %d\n",power);
    return 0;
}