#include<stdio.h>
int main(void)
{
    int num1,num2,num3;
    printf("enter the numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
    {
        printf("\n the num1 is greatest.");
    }
    else if(num2>num1 && num2>num3)
    {
        printf("\n the num2 is greatest.");
    }
    else
    {
        printf("\n the num3 is greatest");
    }
    return 0;
}