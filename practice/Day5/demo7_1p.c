#include<stdio.h>
int main(void)
{
    int num,counter;
    printf("\n enter the number: ");
    scanf("%d",&num);
    for(counter=num;counter>=1;counter-=1)
    {
        printf("%5d",counter);
        if(counter%10==00)
        {
            printf("\n ");
        }
        
    }
    return 0;
}

