#include <stdio.h>
int main(){
     //Take two integers input, a and b : a>b, and find the remainder when a is divided by b and print the remainder.
int a, b, q, r;
printf("enter the value of a and b:"); //a = 1st number. // b = 2nd number.
scanf("%d%d",&a,&b); // scan value of a and b
q = (a/b); //divide a nd b and store value in q.
printf("\n");
r = a-(b*q); // multiply b and q and subtract from a.
printf(" remainder : %d",r); // print remainder.
    return 0;
}