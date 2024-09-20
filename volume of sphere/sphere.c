#include <stdio.h>
int main(){

float radius;
printf("Enter radiuas of sphere :"); //enter your radius using printf
scanf("%f",&radius);
float pi = 3.14; //value of pi
float volume = (radius*radius*radius*pi*4)/3; //apply formulae
printf("Volume of sphere is : %f",volume); //print output
return 0;   
}