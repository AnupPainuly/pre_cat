//Evaluate the number of days in a given month using switch-case.
#include<stdio.h>
int main(void)
{
    int monthnum, year;
    printf("\n Enter the month number: ");
    scanf("%d",&monthnum);
    switch (monthnum)
    {
        default:printf("\n Invalid Month.");
        case 1:printf("\n The no of days in Jan are 31.");break;
        case 2:
        {
            printf("\n Enter the year");
            scanf("%d",&year);
            if (year%4==0)
            {
                printf("\n the year is of leap and Febraury has 29 days");
            }
            else
            {
                printf("\n the year is not of leap and Febraury has 28 days");
            }
        break;             
        }
        case 3: printf("\n The no of days in Mar are 31.");break;
        case 4: printf("\n The no of days in Apil are 30.");break;
        case 5: printf("\n The no od days in May are 31");break;
        case 6: printf("\n The no of days in June are 30.");break;
        case 7: printf("\n The no of days in July are 31.");break;
        case 8: printf("\n The no of days in August are 31.");break;
        case 9: printf("\n The no of days in September are 30.");break;
        case 10: printf("\n The no of days in October are 31.");break;
        case 11: printf("\n The no of days in November are 30.");break;
        case 12: printf("\n The no of days in December are 31.");break; 
    }
    return 0;
}