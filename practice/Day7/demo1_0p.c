#include<stdio.h>
enum month
{
    Exit,Jan,Feb,Mar,April,May,June,July,August,September,October,November,December
};
int main(void)
{
    enum month m,year; //can we have declare variable 'year' with enum??
    printf("\n Enter the month number: ");
    scanf("%d",&m);
    switch(m)
    {
        case Jan: printf("\n Jan has 31 days: ");break;
        case Feb:
        {
            printf("\n enter the year: ");
            scanf("%d", &year);
            if(year%4==0)
            {
                printf("\n the year is of leap and it has 29 days.");
            }
            else
            {
                printf("\n the yeat is not of leap and it has 28 days.");
            }            
        }
        break;
        case Mar:printf("\n Mar has 31 days: ");break;
        case April:printf("\n April has 30 days: ");break;
        case May:printf("\n May has 31 days: ");break;
        case June:printf("\n June has 30 days: ");break;
        case July:printf("\n July has 31 days: ");break;
        case August:printf("\n August has 31 days: ");break;
        case September:printf("\n September has 30 days: ");break;
        case October:printf("\n October has 31 days: ");break;
        case November:printf("\n November has 30 days: ");break;
        case December:printf("\n December has 31 days: ");break;

    }
    return 0;
}