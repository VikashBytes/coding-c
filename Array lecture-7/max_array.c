#include <stdio.h>
// Ques : Find the maximum value out of all the elements i)in the array.
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n]; // Declare the array with the size entered by the user
    for (int i = 0; i < n; i++)
    {
        printf("Enter element (%d): ", i);
        scanf("%d", &arr[i]);
    }

    int max = arr[0]; // Initialize max with the first element of the array
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Maximum = %d\n", max);
    return 0;
}
