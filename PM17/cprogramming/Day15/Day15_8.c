#include<stdio.h>
//A Program to read file randomly
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
    printf("Current File Position %ld\n",ftell(fp));

    fseek(fp ,10 ,SEEK_SET);//will reposition file pointer 10 offset position from beginning of file
    printf("Current File Position %ld\n",ftell(fp));
    ch = fgetc(fp);
    printf("Current File Position %ld ch=%c\n",ftell(fp),ch);


    fseek(fp ,-5 ,SEEK_CUR);//will reposition file pointer 5 offset position back from current position of file
    printf("Current File Position %ld\n",ftell(fp));
    ch = fgetc(fp);
    printf("Current File Position %ld ch=%c\n",ftell(fp),ch);

    fseek(fp ,-5 ,SEEK_END );//will reposition file pointer 5 offset position back from end of file
    printf("Current File Position %ld\n",ftell(fp));
    ch = fgetc(fp);
    printf("Current File Position %ld ch=%c\n",ftell(fp),ch);

  //  rewind(fp); //reposition file pointer at 0 offset
  //  fseek(fp,0,SEEK_SET);

    fclose(fp);
}