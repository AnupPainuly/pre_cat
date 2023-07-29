#include<stdio.h>
int main(void)
{
    char i=0;
    do
    {
        printf("%d,",i);   
    }while(--i); //value of i will decrement from 0 to -128 which is the lower limit of char.
                //after that due to overflow i will 127 which is upper limit of char,
                // while loop will continue till 0 and then stop.
    return 0;
}