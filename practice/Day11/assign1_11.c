#include<stdio.h>
#include<limits.h>
int main(void)
{
    char ch;
    int i;
    printf("Data type Size Format Specifier Range%\n");
    printf("char %7d   %%c %8d to %4d\n",sizeof(ch),CHAR_MIN,CHAR_MAX);
    return 0;
}