#include<stdio.h>
int main(void)
{
    int monthnum,year;
    printf("\n enter the month number: ");
    scanf("%d",&monthnum);
    switch(monthnum)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        {
            printf("\n the month %d has 31 days",monthnum);
            break;
        }
        case 2:
        {
            printf("\n enter the year: ");
            scanf("%d",&year);
            if (year%4==0)
            {
                printf("\n the year is of leap and it has 29 days",monthnum);
            }
            else
            {
                printf("\n the year is not of leap and it has 28 days",monthnum);
            }
            break; 
        }
        case 4:
        case 6:
        case 9:
        case 11:
        {
            printf("\n the month %d has 30 days",monthnum);
        }
        break;
    }
    return 0;
}