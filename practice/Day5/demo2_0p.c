//evaluate the number of days in a given month.

#include<stdio.h>
int main(void)
{
    int monthnum,year;
    printf("\n enter the month number");
    scanf("%d",&monthnum);
    if(monthnum==1 || monthnum==3 || monthnum==5 || monthnum==7 || monthnum==8 || monthnum==10 || monthnum==12)
    {
        printf("the entered month %d has 31 days",monthnum);
    }
    else if(monthnum==6 || monthnum==9 ||monthnum==11 ||monthnum==4)
    {
        printf("the entered month %d has 30 days",monthnum);
    }
    else if(monthnum==2)
    {
        printf("\n enter the year");
        scanf("%d",&year);
        if (year%4==0)
        {
            printf("\n the month is in the year of leap and has 29 days");
        }
        else
        {
            printf("\n the month is in the year of leap and has 28 days");
        }
    }
    
    return 0;
}