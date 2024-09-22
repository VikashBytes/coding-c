#include <stdio.h>
int main()
{
    float x1 = 30;                     // x1 can be physics
    float x2 = 35;                     // x2 can be chemistry
    float x3 = 25;                     // x3 can be maths
    float x4 = 40;                     // x4 can be english
    float total = (x1 + x2 + x3 + x4); // total marks
    printf("\n");
    float percentage = (total / 160) * 100; // apply formulae
    printf("your percentage = %f", percentage);
    return 0;
}