#include<stdio.h>
int main(void)
{
    printf("%d", '\n'-'\r');// output: -3 
                            // here the escape sequences \n and \r are passed as characters.
                            // the ascii value of \n is 10 and that of \r is 13 hence (10-13)
    return 0;
}