#include <stdio.h>
int main(){

float radius;
printf("Enter your radius :"); //enter your radius using printf
scanf("%f",&radius);
float pi = 3.145; //value of pi
float volume = (radius*radius*radius*pi)/3; //apply formulae
printf("Volume of sphere is : %f",volume); //print output
return 0;   
}