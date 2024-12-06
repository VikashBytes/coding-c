// Homework : Find the minimum value out of all the elements in the array.
#include <stdio.h>
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

    int min = arr[0]; // Initialize min with the first element of the array
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("minimum = %d\n", min);
    return 0;
}
