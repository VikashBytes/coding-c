#include <stdio.h>

int main()
{
    int n;

    // enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char letter = 'A';
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
    }

    return 0;
}
