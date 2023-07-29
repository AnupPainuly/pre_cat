#include<stdio.h>
int main(void)
{
    int monthnum,year;
    printf("\n enter the month number: ");
    scanf("%d",&monthnum);
    if(monthnum==1)
    {
        printf("\n the month of january has 31 days:");
    }
    else if(monthnum==2)
    {
        printf("\n enter the year: ");
        scanf("%d",&year);
        if (year%4==0)
        {
            printf("\n the month of Febraury has 29 days");
        }
        else
        {
            printf("\n the month of Febraury has 28 days");
        }
    }    
    else if(monthnum==3)
    {
        printf("\n the month of March has 31 days");
    }
    else if(monthnum==4)
    {
        printf("\n the month of April has 30 days");
    }
    else if(monthnum==5)
    {
        printf("\n the month of May has 31 days");
    }
    else if(monthnum==6)
    {
        printf("\n the month of June has 30 days");
    }
    else if(monthnum==7)
    {
        printf("\n the month of July has 31 days");
    }
    else if(monthnum==8)
    {
        printf("\n the month of August has 31 days");
    }
    else if(monthnum==9)
    {
        printf("\n the month of September has 30 days");
    }
    else if(monthnum==10)
    {
        printf("\n the month of October has 31 days");
    }
    else if(monthnum==11)
    {
        printf("\n the month of November has 30 days");
    }
    else if(monthnum==12)
    {
        printf("\n the month of December has 31 days");
    }
            
    return 0;
}
