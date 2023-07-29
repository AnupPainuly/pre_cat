#include<stdio.h>
int main(void)
{
    float num1, num2;
    printf("\n Enter number one ");
    scanf("%f",&num1);
    printf("\n Enter number two ");
    scanf("%f", &num2);
    printf("\n Number 1=%f and Number2=%f",num1, num2);
    printf("\n Number 1=%.0f and Number2=%.0f", num1, num2);
    printf("\n Number 1=%0.2f anf Number 2=%0.2f",num1, num2);
    

    return 0;

}