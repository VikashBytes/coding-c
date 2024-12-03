// Ques : Swap 2 numbers without using third variable
#include <stdio.h>
void swap(int* x, int* y){
int temp = *x;
*x = *y;
*y = temp;
return;
}
int main(){
    int a, b, temp;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
   
//    int* x=&a;
//    int* y = &b;

   swap(&a,&b);
   printf("the value of a is %d\n",a);
   printf("the value of b is %d\n", b);
   return 0;
}