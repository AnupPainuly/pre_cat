//Demonstration of ending if statement with semi colon.
//It is not acceptable to end else if or nested if with semi colon. Only simple if can be ended with semi colon.
#include<stdio.h>
int main(void)
{
    int num1=1, num2=0;
    if(num1); // ending the if statement with ';' is accepted here because it is considered as empty statement.
    {
        printf("\n yes");
    }
    if(num2);
    {
        printf("\n no");
    }
    return 0;
}