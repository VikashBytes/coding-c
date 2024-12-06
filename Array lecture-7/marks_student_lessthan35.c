// Ques: Given an array of marks of students, if the mark of any student is less than 35 print its roll number.[roll number here refers to the index of the array.]
#include <stdio.h>
int main(){
int arr[10];
for(int i = 0; i <= 9; i++){
    printf("enter marks of roll No.:%d = : ",i);
    scanf("%d",&arr[i]);
}

    for(int i = 0; i<=9;i++){
        if (arr[i]<=35)
        {
           printf("%d ",i);
        }
        
    }
    return 0;
}