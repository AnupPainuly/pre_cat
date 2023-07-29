// What will the output of the following:
#include<stdio.h>
int main(void)
{
    signed char ch1=127; //signed character's range is -128 to 127
    unsigned char ch2=126;// unsigned character's range is 0 to 255
    unsigned char ch3=~(++ch1 > ++ch2) >> 1;
    printf("ch3 = %u\n",ch3);
}   