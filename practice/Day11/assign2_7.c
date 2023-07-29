//check if the given year is a leap or not.
#include<stdio.h>
int main(void)
{
    int year;
    printf("\n enter the year: ");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0) //if a year is divisible by 4 but not divible by 100
    {
        printf("the year is a leap year");
    }
    else if(year%4==0 && year%100==0 && year%400==0)
    {
        printf("\n the year is a leap year");
    }
    else{
        printf("\n the year is a leap year");
    }
    return 0;

}