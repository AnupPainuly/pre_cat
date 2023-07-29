#include<stdio.h>
int main(void)
{
    int a=-10,b=3,c=0,d;
    d = a++ || ++b && c++;
    printf("%d, %d, %d, %d",a,b,c,d); //output: -9,3,0,1
    a=-10, b=3, c=0;
    d= c++ && ++b || a++;
    printf("%d, %d, %d, %d",a,b,c,d);//output: -9,3,1,1
    return 0;
}