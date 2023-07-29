#include<stdio.h>
int main(void)
{
    int num1,num2;
    printf("enter the numbers: ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        printf("\n the num1 is greater than num2");
    }
    else
    {
        printf("\n the num2 is greater than num1");
    }
    return 0;
}