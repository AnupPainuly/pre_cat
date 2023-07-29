#include<stdio.h>
int main(void)
{
    char i=0;
    do
    {
        printf("%d,",i);   
    }while(i--); // since its post decrement i is assigned the value '0' first and while becomes false.
    return 0;
}