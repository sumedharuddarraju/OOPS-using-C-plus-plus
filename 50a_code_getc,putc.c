//putc,getc
#include<stdio.h>
int main()
{
	FILE *fptr;
	char ch;
	fptr=fopen("Sample File1.txt","w");
	if(fptr)
	printf("\nFile opened successfully\n");
	printf("Input data\n");
	while((ch=getchar())!='$')
	{
		putc(ch,fptr);
	}
	fclose(fptr);
	fptr=fopen("Sample File1.txt","r");
	while((ch=getc(fptr))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fptr);
	return 0;
}
