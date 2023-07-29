#include<stdio.h>
int main(void)
{
    int x=300;
    printf("%u",x*x/x); //*,/,% has precendence of 2 and associativity of right to left.
                        // output is 300.
    return 0;
}