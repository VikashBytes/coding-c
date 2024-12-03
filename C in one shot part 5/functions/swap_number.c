// Ques : Swap 2 numbers without using third variable
#include <stdio.h>
int swap(int x, int y){
int temp = x;
x = y;
y = temp;
return (x,y);
}
int main(){
    int a, b, temp;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
   
   int numb = swap(a,b);
   printf("the value of a is %d\n",a);
   printf("the value of b is %d\n", b);
   return 0;
}