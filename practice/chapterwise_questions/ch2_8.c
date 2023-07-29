#include<stdio.h>
int main(void)
{
    printf("\n %d", 1 | 3 % 2); // the precedence of % is 3 while that of '|' is 10
                                //1 since (1 | 1) is true 
    return 0;
}