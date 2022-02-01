/**************************
getchar and putchar
***************************/
#include <stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    printf("enter a character\n");
    ch=getchar();
    printf("the entered character is\n");
    putchar(ch);
    
    return 0;
}


