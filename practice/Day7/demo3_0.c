//menu driven program of a calculator
#include<stdio.h>
typedef enum operations
{
    Exit,add,sub,multiply,div
}ops;
int main(void)

{
    int num1,num2,num3,ans;
    printf("\n enter the numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("\n enter your choice of operation:\n 1 for add\n 2 for sub \n 3 for multiply \n 4 for div ");
    scanf("%d",&num3);
    ops o;
    o=(ops)num3;
    switch(o)
    {       
        case add:
        {
            ans=num1+num2;
            printf("\n the addition is: %d",ans);break;
        }
        case sub:
        {
            ans=num1-num2;
            printf("\n the addition is: %d",ans);break;
        }
        case multiply:
        {
            ans=num1*num2;
            printf("\n the addition is: %d",ans);break;
        }
        case div:
        {
            ans=num1/num2;
            printf("\n the addition is: %d",ans);break;
        }
    }
    return 0;
}
