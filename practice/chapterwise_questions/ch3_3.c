#include<stdio.h>
int main(void)
{
    int a=3;
    while(a--) //intialisation for while loop is a=3, sentry(condition) is a-- and incre/decre is also a--
    {
        printf("%d,",a);
    }
    return 0;
}