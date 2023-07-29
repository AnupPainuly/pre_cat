//What is the output of following program?
#include<stdio.h>
int main(void)
{
    int a=10, i=20;
    char b;
    printf("%d\n",(sizeof(i-a)+sizeof(b)));
    return 0;
}