//Programs on I/O using C functions printf,scanf,getchar,putchar,gets,puts

#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    char str[10],ch;
        printf("\nenter a Character  : ");
	ch=getchar();                            //getchar
    //using printf and scanf
    printf("\nEnter a number :");
    scanf("%d",&a);                          //scanf 
    
	printf("\nenter a string  :  ");
    gets(str);                             //gets
	printf("entered number is %d\n",a);     //printf
    printf("entered string is ");
	puts(str); 
	printf("entered character is ");
	putchar(ch);
    return 0;
}
