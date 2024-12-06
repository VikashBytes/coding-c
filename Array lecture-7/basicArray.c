#include <stdio.h>
int main(){
    int a[5] = {2,4,6,8,1}; //created 5 box
    //we can change array forcefully
    a[4] = 100;
    a[1] = 10;
    printf("%d\n",a[4]);
    printf("%d", a[1]);
    return 0;
}