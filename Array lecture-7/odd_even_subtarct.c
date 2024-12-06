#include <stdio.h>
int main(){
    // Ques : Find the difference between the sum of
    //elements at even indices to the sum of elements at
        //odd indices.

//int arr[7] = {1,2,3,4,5,6,7};
    int n;
    printf("Enter the Size of Array : ");
    scanf("%d",&n);
    int arr[n];
 for (int i = 0; i < n; i++)
{
    printf("Enter the value of (%d) indices : ",i);
    scanf("%d",&arr[i]);
}
    int odd=0,even=0;
for (int i = 0; i < n; i++)
{
    if (i%2==0)
    {
       even = even+arr[i];
    }
    else {odd = odd + arr[i];}
}
    int sum;
    sum = even-odd;
    printf("Sum = %d",sum);
return 0;
}