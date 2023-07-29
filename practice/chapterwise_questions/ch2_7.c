#include<stdio.h>
int main(void)
{
    char a=255;// char overflow will happen since by default char is signed and the range of char is -128 to 127.
    char b =127;
    printf("%d",a);
    b=~b; // ~b =-b-1
    a=a^b;
    printf("\n%d, %d",a,b);
    return 0;
}