#include<stdio.h>
int main(void)
{
    int a =(1,2,3);
    int b=(++a,++a,++a);
    int c=(b++,b++,b++);
    printf("\n %d, %d, %d",a,b,c); // output 6,9,8
    return 0;
}