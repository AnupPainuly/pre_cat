#include<stdio.h>
int main(void)
{
    int a=3, b=6;
    if(a=b)                   // a=6, non-zero number is true hence if block is executed.
    {
        printf("%d,%d",a,b);  // output: 6,6
    }
    else
    {
        printf("%d != %d",a,b);

    }
    return 0;
}