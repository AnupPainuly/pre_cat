#include<stdio.h>
void divby2(int no);
void divby3(int no);
void divby4(int no);
int main(void)
{
    int num;
    printf("\nEnter the number:");
    scanf("%d",&num);
    divby2(num);
    divby3(num);
    divby4(num);  
    return 0;
}
void divby2(int no)
{
    if(no%2==0)
    {
    printf("\nThe number is divisible by 2 ");
    }
    return 0;
}
void divby3(int no)
{
    int units,tenths,sum;
    units=no%10;
    tenths=no/10;
    sum=units+tenths;
    if(sum%3==0)
    {
        printf("\nThe number is divisble by 3 ");
    }
    return;
}
void divby4(int no)
{
    int units,tenths,sum;
    units=no%10;
    tenths=no/10;
    sum=units+tenths;
    if(sum%4==0 || units==0 && tenths==0)
    {
        printf("\nThe number is divisible by 4");
    }
    return;
}