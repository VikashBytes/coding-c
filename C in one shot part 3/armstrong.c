#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, remainder, c = 0, n = 0, temp;
    printf("Enter the number: ");
    scanf("%d", &a);

    b = a;    // Preserve the original number for comparison
    temp = a; // Temporary variable for counting digits

    // Count the number of digits in a
    while (temp != 0)
    {
        temp /= 10;
        n++;
    }

    b = a; // Reset b to the original number

    // Calculate the sum of the nth powers of each digit
    for (int i = 0; i < n; i++)
    {
        remainder = b % 10;
        c += pow(remainder, n);
        b /= 10;
    }

    // Check if the number is an Armstrong number
    if (c == a)
    {
        printf("%d is an Armstrong number.\n", a);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", a);
    }

    return 0;
}
