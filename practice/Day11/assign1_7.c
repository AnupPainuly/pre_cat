#include<stdio.h>
int main(void)
{
    int u,t,ttemp,h,htemp,th,thtemp,num;
    printf("\n enter the number: ");
    scanf("%d",&num);
    u=num%10;t=num%100;ttemp=t/10;h=num/100;htemp=h%10;th=num/100;thtemp=th/10;
    printf("\n%d %d %d %d",u,ttemp,htemp,thtemp);
    printf("\n%d %d %d %d",u*1,ttemp*10,htemp*100,thtemp*1000);
    printf("\n%d %d %d %d",thtemp,htemp,ttemp,u);
    return 0;
}