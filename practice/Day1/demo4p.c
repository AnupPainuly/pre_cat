#include<stdio.h>
int main(void)
{
    printf("\\a=%d",'\a');        // why not use operator sizeof()?
    printf("\n \\t=%d",'\t');
    printf("\n \\b=%d",'\b');
    printf("\n \\r=%d", '\r');
    return 0;

}