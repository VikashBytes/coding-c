#include <stdio.h>
// Predict the output - 5
int main()
{
    int x, y, z;
    x = 3;
    y = x = 10;
    z = x < 10;

    printf("\nx=%d y=%dz=%d", x, y, z);

    return 0;
}