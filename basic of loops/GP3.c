#include <stdio.h>

// HW : Display this GP - 100, 50, 25,... upto 'n' terms.
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    float a = 100;

    for (int i = 1; i <= n; i++)
    {
        printf("%.2f ", a); // Display the value with two decimal places
        a /= 2;             // Shorter way to write a = a / 2
    }

    return 0;
}
