//Ques : Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.
#include <stdio.h>
int main(){
    int a;
int arr[10]={1,2,3,4,5,6,7,8,9,10};
for (int i = 0; i <10; i++)
{
    if (i%2!=0)
    {
        a = arr[i]*2;
        
    }
    else a = arr[i]+10;
    printf("%d ", a);
    
} 
    return 0;
}