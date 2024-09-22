#include <stdio.h>
int main(){
int length, breadth, area, perimeter;

printf("Enter length of rectangle : ");
scanf("%d",&length);

printf("Enter breadth of rectangle : ");
scanf("%d",&breadth);

area = length * breadth;
printf("area = %d\n",area);

perimeter = (length + breadth)*2;
printf("perimeter = %d\n",perimeter);

if (area>perimeter)
{
    printf("area is greater");
}

else if (perimeter>area)
{
   printf("perimeter is greater");
}
else
{
    printf("area = perimeter");
}


    return 0;
}