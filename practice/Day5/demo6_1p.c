#include<stdio.h>
int main(void)
{
    int num, counter;
    printf("\n enter the number: ");
    scanf("%d",&num);
    counter=num;
    while(counter>0)
    {
        printf("%5d ",counter);
        counter-=1;
        if(counter%10==0)
        {
            printf("\n");
        }
    }
    return 0;
}