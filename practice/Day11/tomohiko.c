//Tomohiko algorithm to find the day on a given date-month-year
#include<stdio.h>
int main(void)
{
    int year,month,last2digit,q_last2digit,date,lead_days_month,odd_days_year,ans;
    int jan=1,feb=2,mar=3,apr=4,may=5,jun=6,jul=7,aug=8,sep=9,oct=10,nov=11,dec=12;
    int u,t,ttemp,h,htemp,th,thtemp;
    int sunday=0,monday=1,tuesday=2,wednesday=3,thursday=4,friday=5,saturday=6;
    printf("\n enter the date,month and year:");
    scanf("%d%d%d",&date,&month,&year);
    u=year%10;t=year%100;ttemp=t/10;h=year/100;htemp=h%10;th=year/100;thtemp=th/10;
    //printf("\n%d %d %d %d",u,ttemp,htemp,thtemp);
    if(year>=2000 && year <=2099 || year>=1600 && year>=1699)//tomohiko codes for years.
    {
        odd_days_year=6;
    }
    else if(year>=1700 && year<1799)
    {
        odd_days_year=4;
    }
    else if(year>=1800 && year<1899)
    {
        odd_days_year=2;
    }
    else if(year>=1900 && year<1999)
    {
        odd_days_year=0;
    }
    if(month==1) //codition for jan month
    {
       if(year%4==0 && year%100==0 || year%400==0)//leap year if divisible by only 4 and not by 100. 
                                                //however, if the year is divisible by 4 and 100 then it should also be divisible by 400.
        {
            last2digit=u+ttemp*10;
            q_last2digit=last2digit/4;
            lead_days_month=0;
            ans=((last2digit+q_last2digit+date+lead_days_month+odd_days_year)%7)-1;// substraction of 1 from the ans for months of jan and feb in a leap year.
        }
        else
        {
            last2digit=u+ttemp*10;
            q_last2digit=last2digit/4;
            lead_days_month=0;
            ans=(last2digit+q_last2digit+date+lead_days_month+odd_days_year)%7;
        }
    }
        else if(month==2)//codition for feb month
    {
        if(year%4==0 && year%100==0 || year%400==0) //codition for leap year
        {
            last2digit=u+ttemp*10;
            q_last2digit=last2digit/4;
            lead_days_month=3;
            ans=((last2digit+q_last2digit+date+lead_days_month+odd_days_year)%7)-1;
        }
        else
        {
            last2digit=u+ttemp*10;
            q_last2digit=last2digit/4;
            lead_days_month=3;
            ans=(last2digit+q_last2digit+date+lead_days_month+odd_days_year)%7;
        }
    }
    else if(month==3)//codition for march  month
    {
        last2digit=u+ttemp*10;
        q_last2digit=last2digit/4;
        lead_days_month=3;
        ans=(last2digit+q_last2digit+date+lead_days_month+odd_days_year)%7;
    }
    else if(month==4)//condition for april month
    {
        last2digit=u+ttemp*10;
        q_last2digit=last2digit/4;
        lead_days_month=6;
        ans=(last2digit+q_last2digit+date+lead_days_month+odd_days_year)%7;
    }
    else if(month==5)//condition for may month
    {
        last2digit=u+ttemp*10;
        q_last2digit=last2digit/4;
        lead_days_month=1;
        ans=(last2digit+q_last2digit+date+lead_days_month+odd_days_year)%7;
    }
    else if(month==6)//condition for june month
    {
        last2digit=u+ttemp*10;
        q_last2digit=last2digit/4;
        lead_days_month=4;
        ans=(last2digit+q_last2digit+date+lead_days_month+odd_days_year)%7;
    }
    else if(month==7)//condition for july month
    {
        last2digit=u+ttemp*10;
        q_last2digit=last2digit/4;
        lead_days_month=6;
        ans=(last2digit+q_last2digit+date+lead_days_month+odd_days_year)%7;
    }
    else if(month==8)//condition for august month
    {
        last2digit=u+ttemp*10;
        q_last2digit=last2digit/4;
        lead_days_month=2;
        ans=(last2digit+q_last2digit+date+lead_days_month+odd_days_year)%7;
    }
    else if(month==9)//condition for sept month
    {
        last2digit=u+ttemp*10;
        q_last2digit=last2digit/4;
        lead_days_month=5;
        ans=(last2digit+q_last2digit+date+lead_days_month+odd_days_year)%7;
        printf("last2digit-%d,q_last2digit-%d,ans-%d,",last2digit,q_last2digit,ans);
    }
    else if(month==10)//condition for oct month
    {
        last2digit=u+ttemp*10;
        q_last2digit=last2digit/4;
        lead_days_month=0;
        ans=(last2digit+q_last2digit+date+lead_days_month+odd_days_year)%7;
    }
    else if(month==11)//condtion for nov month
    {
        last2digit=u+ttemp*10;
        q_last2digit=last2digit/4;
        lead_days_month=3;
        ans=(last2digit+q_last2digit+date+lead_days_month+odd_days_year)%7;
    }
    else if(month==12)//condition for dec month
    {
        last2digit=u+ttemp*10;
        q_last2digit=last2digit/4;
        lead_days_month=5;
        ans=(last2digit+q_last2digit+date+lead_days_month+odd_days_year)%7;
    }
    //conditions for controlling the display of day of the week.
    else{
        printf("\n Invalid Input");
    }
    if(ans==0)
    {
        printf("the day was sunday.");
    }
    else if(ans==1)
    {
        printf("the day was Monday.");
    }
    else if(ans==2)
    {
        printf("the day was Tuesday.");
    }
    else if(ans==3)
    {
        printf("the day was Wednesday.");
    }
    else if(ans==4)
    {
        printf("the day was Thursday.");
    }
    else if(ans==5)
    {
        printf("the day was Friday.");
    }
    else if(ans==6)
    {
        printf("the day was Saturday.");
    }
    else if(ans==-1)
    {
        printf("the day was Saturday.");//for leap years if the ans is 0 then -1 would be saturday. It is traversing instead of counting.
    }
    return 0;
}
