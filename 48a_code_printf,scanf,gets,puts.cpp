//Programs on I/O using C functions printf,scanf,gets,puts

#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    char str[10],ch;
    
    printf("\nenter a string  :  ");
    gets(str);                              //gets
    
    printf("\nEnter a number :");
    scanf("%d",&a);                          //scanf 
    
	printf("\n\nentered number is %d\n",a);     //printf
    printf("entered string is ");
	puts(str); 

    return 0;
}
