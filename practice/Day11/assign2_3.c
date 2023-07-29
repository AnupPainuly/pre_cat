#include<stdio.h>
int main(void)
{
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("\n the number is negative .");
    }
    else if(num==0)
    {
        printf("\n the number is zero.");
    }
    else
    {
        printf("\n the number is negative");
    }
    return 0;
}