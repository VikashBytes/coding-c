//Ques : Write a program to store roll number and marks obtained by students side by side in a matrix.
#include <stdio.h>
int main(){
int n,s;
printf("Enter the number of students : ");
scanf("%d",&n);
printf("Enter the number of subjects : ");
scanf("%d", &s);
int arr[n][s];
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < s; j++)
       {
        printf("Enter the Marks & roll = :");
        scanf("%d ",&arr[i][j]);

       }
       printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
return 0;
}