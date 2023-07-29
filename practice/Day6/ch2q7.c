#include<stdio.h>
int main(void)
{
    char a=255;
    char b=127;
    char c=0;
    b=~b;
    a=a^b;
    printf("\n%d %d %d",a,b,c);
    return 0;
}