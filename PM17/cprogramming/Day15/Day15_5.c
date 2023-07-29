#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;

    //fopen("d:\\PM17\\abc.txt","w");
    fp = fopen("abc.txt","w");
    //if file is not loaded in memory then fopen function will return NULL
    if(fp==NULL)
    {
        printf("Access Denied !!!");
        return 0;
    }
    //if file pointer is successfully associated
    printf("Specify file contents \n");
    
    while((ch = getchar())!=EOF)
    {
        fputc(ch,stdout); //write 1 byte info to a file
    }
    fclose(fp); //unload from memory
    

}