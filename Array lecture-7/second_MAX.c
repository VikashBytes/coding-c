#include <stdio.h>
#include <limits.h> // For INT_MIN

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element (%d): ", i);
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN)
    {
        printf("There is no second largest element.\n");
    }
    else
    {
        printf("The second largest element is: %d\n", second_largest);
    }

    return 0;
}
