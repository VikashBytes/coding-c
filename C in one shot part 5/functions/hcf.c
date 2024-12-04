#include <stdio.h>

// Function to find the minimum of two numbers
int min(int a, int b)
{
    return (a < b) ? a : b;
}

// Function to compute the greatest common divisor (GCD)
int gcd(int a, int b)
{
    int hcf = 1; // Initialize hcf to 1
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}

int main()
{
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    int hcf = gcd(a, b);
    printf("The HCF of %d and %d is: %d\n", a, b, hcf);
    return 0;
}
