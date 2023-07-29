
#include<stdio.h>
int main(void)
{
    int i,units,tenths,sum;
        for(i=1;i<=100;i++)
        {
            units=i%10;
            tenths=i/10;
            sum=units+tenths;   
            if(i%2==0 && sum%3==0)
                {
                    printf("%d ",i);
                }    
        }
    return 0;
}
