#include <stdio.h>
int main()
{

    int x, y;
    printf("Enter the coordinates : ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("The point is on origin");
    }
    else
    {
        if (x == 0){
            printf("Liess on y-axis");
        }
        else{
            printf("Lies on x-axis");
            
        }
            
        
    }
}