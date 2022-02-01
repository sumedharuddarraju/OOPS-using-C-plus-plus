/**************************
getw and put w
***************************/
#include <stdio.h>
int main()
{
    FILE *fp;
    int i;
    fp=fopen("sample2.txt","w");
    for(i=1;i<=5;i++)
    {
        putw(i,fp);
    }
    fclose(fp);
    fp=fopen("sample2.txt","r");
    printf("content of the file is\n");
    for(i=1;i<=5;i++)
    {
        i=getw(fp);
        printf("%d\n",i);
    }
    fclose(fp);
    return 0;
}

