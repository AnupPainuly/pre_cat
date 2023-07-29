#include<stdio.h>
int main(void)
{
    int a=-10,b=3,c=0,d;
    d=a++ || ++b && c++; //since && has precendence over || hence && will be bound by operand ++b,c++
                         //a++ is a=-10(non zero value is always true) and then a=-10+1=-9. 
                         //Note: since first operand of || is true other side of || is not check hence no change in the values of b and c.                   
    printf("\n %d,%d,%d,%d",a,b,c,d);
    return 0;
}