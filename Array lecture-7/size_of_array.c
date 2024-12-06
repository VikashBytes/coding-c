#include <stdio.h>
int main(){
int n;
printf("Enter the size of array : ");
scanf("%d",&n);
    int arr[n];
        for (int i = 0; i < n; i++)
        {
           printf("Enter the value(%d) off array :",i);
           scanf("%d",&arr[i]);
        }
        for (int i = 0; i < n ; i++)
        {
            printf("the value(%d) off array : %d\n",i, arr[i]);
        }
    return 0;
}