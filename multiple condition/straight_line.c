#include <stdio.h>
int main()
{
    // Ques : Given three points (x1, y1), (x2, y2) and
    // (x3, y3), write a program to check if all the three
    // points fall on one straight line.
    double x1, y1, x2, y2, x3, y3, m1, m2;
    printf("Enter the value of x1 : ");
    scanf("%d", &x1);

    printf("Enter the value of x2 : ");
    scanf("%d", &x2);

    printf("Enter the value of x3 : ");
    scanf("%d", &x3);

    printf("Enter the value of y1 : ");
    scanf("%d", &y1);

    printf("Enter the value of y2 : ");
    scanf("%d", &y2);

    printf("Enter the value of y3 : ");
    scanf("%d", &y3);
    // slope of AB
    m1 = (y2 - y1) / (x2 - x1);
    // slope of BC
    m2 = (y3 - y2) / (x3 - x2);

    if (m1 = m2)
    {
        printf("All the three line fall on straight line : ");
    }
    else
    {
        printf("not lies on straight line");
    }

    return 0;
}