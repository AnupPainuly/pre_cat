//menu driven program using do while loop
#include<stdio.h>
typedef enum operations
{
    Exit,add,sub,mul,div
}ops;
int main(void)
{
    int num1,num2,option,ans;
    ops choice;
    do
    {
        printf("\n enter the numbers: ");
        scanf("%d%d",&num1,&num2);
        printf("\n enter the option:\n 1 for add \n 2 for sub \n 3 for mul \n 4 for div\n");
        scanf("%d",&option);
        choice=(ops)option;
        switch(choice)
        {
            case add:
            {
                ans=num1+num2;
                printf("\n the answer is %d",ans);break;
            }
            case sub:
            {
                ans=num1-num2;
                printf("\n the answer is %d",ans);break;
            }
            case mul:
            {
                ans=num1*num2;
                printf("\n the answer is %d",ans);break;
            }
            case div:
            {
                ans=num1/num2;
                printf("\n the answer is %d",ans);break;
            }
            

        }
        printf("\n enter 1 to continue or enter 0 to exit\n");
        scanf("%d",&choice);


    }while(choice!=0);

    return 0;


}