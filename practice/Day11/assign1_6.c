#include<stdio.h>
int main(void)
{
    int factor,num,prod;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(factor=1;factor<=10;factor++)
    {
        prod=num*factor;
        printf("\n %d X %d = %d",num,factor,prod);
    }
    return 0;
}