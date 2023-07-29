#include<stdio.h>
int main(void)
{
    int ans,num1,num2;
    printf("\n enter the numbers that are integers: ");
    scanf("%d%d", &num1, &num2);
    ans=num1/num2;
    printf("\n The division of the two numbers is:%d",ans);

    {

    float ans1, num3,num4;
    printf("\n enter the numbers that are integers: ");
    scanf("%d%d", &num3, &num4);
    ans1=num3/num4;
    printf("\n The division of the two numbers is:%f",ans1); //why does this print the ans 3.333333 instead of                3.000000-ans:because of float declaration

    }
    return 0;

}