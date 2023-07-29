#include<stdio.h>
int main(void)
{
    int a,b,sum,diff,prod;
    printf("enter the numbers:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    diff=a-b;
    prod=a*b;
    printf("the sum is %d and the product is %d and the difference is %d",sum,prod,diff);
    return 0;
}