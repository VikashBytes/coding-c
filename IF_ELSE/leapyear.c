#include <stdio.h>
int main(){
    //Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)
int n;
printf("Enter The year : ");
scanf("%d",&n);
if (n%4==0)
{
   printf("Yess, this is a leap year ");
}
else
{
   printf("no, its not a leap year");
}

    return 0;
}