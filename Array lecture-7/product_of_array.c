#include <stdio.h>
int main()
{
    int n,product = 1;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("Enter the value(%d) off array :", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        product = product*arr[i];
    }
    printf("product = : %d",product);
    return 0;
}