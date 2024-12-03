// Ques : Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.
#include <stdio.h>
int main()
{
    // what is type casting ?
    // int x = 65;
    // printf("%d\n",x);
    // char ch = (char)x;
    // printf("%c", ch);

    // char ch = 'A';
    // printf("%c\n",ch);
    // int x = (int)ch;
    // printf("%d\n",x);

    for (int i = 65; i <=90; i++)
    {
        
        char ch = (char)i;
        printf("%d => ", i);
        printf("%c\n",ch);
    }
    
    return 0;
}