#include <stdio.h>
int main(){
    // 1 2
    // 3 4
   // 2nd method of decleration

    int arr[3][3] = {{1,2,3},{3,4,5},{4,5,6}};

        for (int i = 0; i < 3; i++)
        {
           for (int j = 0; j < 3; j++)
           {
           printf("%d ",arr[i][j]);
           }
          printf("\n");
        }
        
    //1st method decleration
    // arr[0][0] = 1;
    // arr[0][1] = 2;
    // arr[1][0] = 3;
    // arr[1][1] = 4;
}