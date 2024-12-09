#include <stdio.h>
int main()
{
    int r,c;
    
    printf("Enter number of rows : ");
    scanf("%d",&r);
    printf("Enter number of column : ");
    scanf("%d", &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the row(%d) and column (%d) : ",i,j);
            scanf("%d", &arr[i][j]);
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}