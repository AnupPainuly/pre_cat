#include<stdio.h>
int main(void)
{
    int x=-1;
    printf("%u, %x, %d", x>>1, x<<4, (unsigned)x>>1);
    return 0;
}