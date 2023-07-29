#include<stdio.h>
int main(void)  
{
    char ch;
    printf("\n enter the character: ");
    scanf("%c",&ch);
    printf("\n the decimal value is %d, the octal value is %o, the hex value is %x",ch,ch,ch);
    return 0;
}