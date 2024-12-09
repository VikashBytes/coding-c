#include <stdio.h>

int main()
{
    int n, s;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the number of subjects: ");
    scanf("%d", &s);

    // Define a 2D array to store roll numbers and marks
    int arr[n][s + 1];

    // Input roll numbers and marks
    for (int i = 0; i < n; i++)
    {
        printf("Enter the roll number for student %d: ", i + 1);
        scanf("%d", &arr[i][0]); // Store roll number

        for (int j = 1; j <= s; j++)
        {
            printf("Enter the marks for subject %d: ", j);
            scanf("%d", &arr[i][j]); // Store marks for each subject
        }
    }

    // Display roll numbers and marks
    printf("Roll Number and Marks:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll Number: %d ", arr[i][0]);
        for (int j = 1; j <= s; j++)
        {
            printf("Marks in Subject %d: %d ", j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
