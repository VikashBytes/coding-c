#include <stdio.h>

int main()
{
    int rows, cols;

    // Enter the number of rows and columns for the matrix
    printf("Enter the number of rows and columns (must be the same): ");
    scanf("%d", &rows);
    cols = rows; // it's a square matrix, rows = cols

    int matrix[rows][cols];
    int sum = 0;

    // take Input  for the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate  principal diagonal elements
    for (int i = 0; i < rows; i++)
    {
        sum += matrix[i][i];
    }

    // print principal diagonal elements
    printf("Sum of the principal diagonal elements: %d\n", sum);

    return 0;
}
