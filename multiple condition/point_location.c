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
        else
        {
            if (y==0)
            {
               printf("Lies on X-axis");
            }
            else
            {
                printf("The point does not lies on X or Y axis");
            }
            
        }
        
        
            
        
    }
}