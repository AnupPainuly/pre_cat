//Illustration of break usage.
//break statement can be used only in the loops or switch. it can not be used in simple if.
#include<stdio.h>
int main(void)
{
    int num=10;
    if(num==10)
    {
        printf("\n the number is 10");
        break;
    }
    return 0;
}