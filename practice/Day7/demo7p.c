#include<stdio.h>
int addition(int num1,int num2);// function declaration
int addition(int num1, int num2) //function definition
{
    int temp=0;
    temp= num1+num2;
    return temp;
}
int main(void)
{
    int no1,no2,ans;
    printf("\n enter the two numbers: ");
    scanf("%d%d",&no1,&no2);
    ans=0;
    ans=addition(no1,no2);// function call
    printf("\n %d + %d = %d",no1,no2,ans);
    return 0;
}

