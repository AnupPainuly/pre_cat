#include<stdio.h>
int main()
{
    int divdnd,divsr,ans;
    printf("enter the numbers");
    scanf("%d%d",&divdnd,&divsr);
    if(divsr==0)
    {
        printf("Invalid operation");
    }
    else
    {
        ans=divdnd/divsr;
        printf("Answer:%d ",ans);
    }
    return 0;
}