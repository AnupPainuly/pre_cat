#include<stdio.h>
int main(void)
{
    int num1,num2,num3,average;
    printf("\n enter the three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    average=(num1+num2+num3)/3;
    printf("the average of the given three numbers is: %d ",average);
    return 0;
}