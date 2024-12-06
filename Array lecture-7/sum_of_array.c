#include <stdio.h>
int main(){
    // Ques : Calculate the sum of all the elements in the given array.
    int a[5]; //= {10,20,30,40,50};
    int sum = 0;
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter %d array : ",i);
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<=4; i++){
        sum = sum+a[i];
    }
    printf("sum = %d",sum);
    return 0;
}