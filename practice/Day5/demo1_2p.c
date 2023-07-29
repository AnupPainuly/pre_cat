#include<stdio.h>
int main(void)
{
    char ch;
    printf("\n enter the character ");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122)
    {
        ch-=32; //shorthand fot ch=ch-32
    }
    if(ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
    {
        printf("\n character %c is a vowel",ch);
    }    
    else if (ch>=65 && ch<=90)
    {
        printf("\n the character %c is a consonant",ch);
    }
    else if(ch>=48 && ch<=57)
    {
        printf("\n the character %c is a digit",ch);
    }
    else 
    {
        printf("\n the entered value %c is other character",ch);
    }
    
    return 0;
}