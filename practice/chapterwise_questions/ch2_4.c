#include<stdio.h>
int main(void)
{
    int a=3,b=6;
    printf("%d,",a=b);// output: 6
                    // assignment since it one equal to operator.
    printf("%d,",a==b);// output: 1
                    //6==6 is true and value of true is 1.
    printf("%d,",a!=b);// output: 0
                     // the precendence of logical negation is 2 while that of assignment '=' is 14.
    printf("%d",a=!b);// output: 0
                    // the precendence of logical negation is 2 while that of assignment '=' is 14.
    return 0;
}