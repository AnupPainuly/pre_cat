#include<stdio.h>
//accept source file name and target file name at  command prompt
//and copy source file contents to target file

int main(int argc, char **argv)
{
    FILE *src,*trg;
    char buffer[80];
    src = fopen(argv[1],"r");

    if(src==NULL)
    {
        printf("File Does Not Exist !!!");
        return 0;
    }

    trg = fopen(argv[2],"w");
    if(trg ==NULL)
    {
        printf("Access Denied !!!");
        return 0;
    }
    //copy source file contents to target file
//fgets terminates on either n-1 or newline character which ever is introduced first
    while(fgets(buffer ,80 , src)!=NULL)
        fputs(buffer,trg);
    fclose(src);
    fclose(trg);

}