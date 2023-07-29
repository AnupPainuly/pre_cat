//Demonstration of enum using as typecast
#include<stdio.h>
enum month
{
    Exit, Jan, Feb, Mar
};
int main(void)
{
    int num,year;
    enum month m;
    printf("\n enter the month number: ");
    scanf("%d",&num);
    m=(enum month)num;
    switch(m)
    {
        default:printf("\n Invalid Input");break;
        case Jan:printf("\n Jan has 31 days.");break;
        case Feb:
        {
            printf("\n enter the year: ");
            scanf("%d",year);
            if(year%4==0)
            {
                printf("\n the year is of leap and it has 29 days.");
            }
            else
            {
                printf("\n the year is not of leap and it has 28 days.");
            }
            break;
        }
        case Mar:printf("\n Mar has 31 days.");break;
    }
    return 0;

}
