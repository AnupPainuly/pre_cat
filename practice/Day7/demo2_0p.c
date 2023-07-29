//Demonstration of typedef
#include<stdio.h>
typedef enum month
{
    Exit,Jan,Feb,March
}MONTH;
int main(void)
{
    int num,year;
    printf("\n enter the month number: ");
    scanf("%d",&num);
    MONTH m;
    m=(MONTH)num;
    switch(m)
    {
        default:printf("\n Invalid input");break;
        case Jan:printf("\n Jan has 31 days");break;
        case Feb:
        {
            printf("\n enter the year");
            scanf("%d",&year);
            if(year%4==0)
            {
                printf("\n the year is of leap and feb has 29 days");
            }  
            else
            {
                printf("\n the year is not of leap and feb has 28 days");
            } 
        }
        break;
        case March:printf("\n March has 31 days");break;
    }
    return 0;
}