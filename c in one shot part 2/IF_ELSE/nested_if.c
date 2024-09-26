#include <stdio.h>
// //HW : If the ages of Ram, Shyam and Ajay are input
// through the keyboard, write a program to
// determine the youngest of the three.
int main()
{
    int a, b, c; // a = ram, b = shyam, c = ajay
    printf("Enter the age of ram : ");
    scanf("%d", &a);
    

    printf("Enter the age of shyam : ");
    scanf("%d", &b);

    printf("Enter the age of ajay : ");
    scanf("%d", &c);

    if (a < b)
    {
        if (a < c)
            printf("ram is younger");
        else
            printf("ajay is younger");
    }
    else
    {
        if (b < c)
            printf("shyam is younger");
        else
            printf("ajay is younger");
    }

    return 0;
}