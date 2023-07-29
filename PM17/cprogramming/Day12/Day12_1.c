#include<stdio.h>

//<executable filename> <[<arguments separated by space]>
//argc formal parameter will catch count of arguments given to main
//argv is vector which stores argument given to main as collection of string format
/* int main(int argc, char **argv)
{
    int i;
    printf("Command Line Argument count = %d \n",argc);
    for(i=0;i<argc;i++)
    {
        printf("%s \n",*(argv+i));
    }
} */

int main(int argc,char **argv)
{
    int i,sum=0;
    for(i=1;i<argc;i++)
    {
        sum = sum + atoi(argv[i]);
    }
    printf("sum = %d",sum);
}


//atoi("10")   === 10
//atoi("a10")  === 0


