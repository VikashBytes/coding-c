#include <stdio.h>
int main(){
    // Ques : Find the total number of pairs in the Array whose sum is equal to the given value x.
    //arrray = {1,2,3,4,5,6,7,8}
    int x = 12;
    int count = 0;
    int arr[8]= {1,2,3,4,5,6,7,8};
    for (int i = 0; i < 8; i++)
    {
        for (int j = i+1; j < 8; j++)
        {
            if (arr[i]+arr[j]==x)
            {
                count++;
                printf("(%d,%d),",arr[i],arr[j]);
            }
            
        }
        
        
    }
    printf("\nnumber of pairs = %d",count);
    return 0;
}