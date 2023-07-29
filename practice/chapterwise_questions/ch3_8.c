#include<stdio.h>
int main(void)
{
    int i,j;
    for(i=1;i<=3;i+=2)
    {
        for(j=1;j<=3;j+=2)
        {
            printf("%d,",i+j);
        }
    }    
    return 0;
}