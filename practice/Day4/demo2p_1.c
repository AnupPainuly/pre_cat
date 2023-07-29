#include<stdio.h>
int main(void)
{
    int a=(1,2,3),b,c;
    b=++a, ++a, ++a;
    printf("\n %d %d",a,b); //a=6 b=4
    c=b++,b++,b++;
    printf("\n %d %d %d",a,b,c); //a=6, b=7 c=4
    return 0;
}