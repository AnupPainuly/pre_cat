#include<stdio.h>
int main(void)
{
    char ch; // char is by default unsigned and char has range of -128 to 127.
    //printf("%d",ch); //is the default value of char ch '0'
    while(ch<256) // ch will always be less then 256 and hence while will be always true giving an infinite loop 
    {
        printf("%d,",ch);
    }
    return 0;
}