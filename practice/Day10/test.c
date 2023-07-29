#include<stdio.h>
int main(void)
{
    int num,units,tenths,sum;
    printf("\n Enter a number between (0-100): ");
    scanf("%d",&num);
    units=num%10;
    tenths=num/10;
    sum=units+tenths;
    if(num >100 || num==0)
    {
        printf("Invaild Input");
    }
    else if(num%2==0)
    {
        printf("The number is divisible by 2");
    }
    else if(sum%3==0)
    {
        printf("The number is divisble by 3");
    }
    return 0;
}