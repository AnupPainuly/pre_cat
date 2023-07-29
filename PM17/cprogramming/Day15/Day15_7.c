#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("Day15_1.c","r");
    if(fp == NULL)
    {
        printf("File Does not exist!!!");
        return 0;
    }
    printf("Read File Sequentially ...\n");
    while((ch = fgetc(fp))!=EOF)
    {
        printf("%c",ch);
        //fputc(ch,stdout);
    }
    fclose(fp);
}