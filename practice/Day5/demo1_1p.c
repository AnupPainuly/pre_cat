#include<stdio.h>
int main(void)
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if(ch=='A' || ch=='I' || ch=='O' || ch=='E' || ch=='U')
    {
        printf("The character %c is a vowel",ch);
    }
    else if(ch>=65 && ch<=90)
    {
        printf("The character %c is a consonant",ch);
    }
    else if(ch>=48 && ch<=57)
    {
        printf("The character %c is a digit",ch);
    }
    else
    {
        printf("The entered value %c is other character",ch);
    }
    return 0;

}