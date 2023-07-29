#include<stdio.h>
int main(void)
{
    int a=1,b=1,c=1,d;
    d=b++ && ++a ==--c;
    printf("d=%d",d);
    return 0;
}