#include<stdio.h>
int main(void)
{
    int month,year;
    int jan=1,feb=2,mar=3,apr=4,may=5,jun=6,jul=7,aug=8,sep=9,oct=10,nov=11,dec=12;
    printf(" enter the month and year: ");
    scanf("%d%d",&month,&year);
    if(month==1)
    {
        printf("\n Jan has 31 days.");
    }
    else if(month==2)
    {
        if(year%4==0 && year%100!=0)
        {
            printf("\n Feb has 29 days");
        }
        else if(year%4==0 && year%100==0 && year%400==0)
        {
            printf("\n Feb has 29 days");
        }
        else
        {
             printf("\n Feb has 28 days");
        }
    }
    else if(month==3)
    {
        printf("\n Mar has 31 days.");
    }
    else if(month==4)
    {
        printf("\n Apr has 30 days.");
    }
    else if(month==5)
    {
        printf("\n May has 31 days.");
    }
    else if(month==6)
    {
        printf("\n jun has 30 days.");
    }
    else if(month==7)
    {
        printf("\n Jul has 31 days.");
    }
    else if(month==8)
    {
        printf("\n Aug has 31 days.");
    }
    else if(month==9)
    {
        printf("\n Sep has 30 days.");
    }
    else if(month==10)
    {
        printf("\n Oct has 31 days.");
    }
    else if(month==11)
    {
        printf("\n Nov has 30 days.");
    }
    else if(month==12)
    {
        printf("\n Dec has 31 days.");
    }
    else{
        printf("\n Invalid Month");
    }
    return 0;
}