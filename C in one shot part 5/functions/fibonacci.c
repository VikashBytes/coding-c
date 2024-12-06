// HW : Print first ‘n’ fibonacci numbers.
#include <stdio.h>

// Function to print the first n Fibonacci numbers
void printFibonacci(int n)
{
    int a = 0, b = 1, sum;
    printf("%d %d ", a, b); // Print the first two Fibonacci numbers

    for (int i = 3; i <= n; i++)
    {
        sum = a + b;
        printf("%d ", sum);
        a = b;
        b = sum;
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &n);

    // if (n >= 2)
    // {
    //     printFibonacci(n);
    // }
    // else if (n == 1)
    // {
    //     printf("0\n"); // Print the first Fibonacci number
    // }
    // else
    // {
    //     printf("Please enter a positive integer greater than 0.\n");
    // }

    return 0;
}
