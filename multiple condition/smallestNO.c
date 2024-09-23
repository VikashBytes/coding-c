#include <stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("Enter the age odf ram");
    scanf("%d", &ram);

    printf("Enter the age of shyam");
    scanf("%d", &shyam);

    printf("enter the age of ajay");
    scanf("%d", &ajay);
    if (ram < shyam && ram < ajay)
    {
        printf("hey, ram is younger");
    }
    if (shyam < ram && shyam < ajay)
    {
        printf("hey, shyam is younger");
    }

    else
    {
        printf("hey, ajay is younger");
    }

    return 0;
}