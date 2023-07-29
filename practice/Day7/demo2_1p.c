//typedef
#include<stdio.h>
enum month
{
    Exit,Jan,Feb,March
};
typedef enum month MONTH;
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
        case Jan:printf("\n Jan has 31 days: ");break;
        case Feb:
        {
            printf("\n enter the year: ");
            scanf("%d",&year);
            if(year%4==0)
            {
                printf("\n Feb has 29 days");
            }
            else
            {
                printf("\n Feb has 28 days");
            }
        }
        break;
        case March:printf("\n March has 31 days");break;
    }
    return 0;


}
