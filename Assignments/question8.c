#include <stdio.h>

int main()
{
    int rows, cols;
    int isSymmetric = 1; //  1 for true, 0 for false

    // Enter the number of rows and columns for the matrix
    printf("Enter the number of rows and columns (must be the same): ");
    scanf("%d", &rows);
    cols = rows; // it's a square matrix, rows = cols

    int matrix[rows][cols];

    // Take Input  for the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check  matrix is symmetric or not
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric)
        {
            break;
        }
    }

    // print the result
    if (isSymmetric)
    {
        printf("The matrix is symmetric.\n");
    }
    else
    {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
