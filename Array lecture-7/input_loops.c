#include <stdio.h>
int main(){
int arr[5];
for(int i=0;i<=4;i++){
    printf("enter element number %d  : ", i);
    scanf("%d",&arr[i]);
}
for(int i = 0;i<=4;i++){
    printf("%d ",arr[i]);
}
    return 0;
}