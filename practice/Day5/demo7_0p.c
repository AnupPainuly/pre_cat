#include<stdio.h>
int main(void)
{
    int num, counter;
    printf("\n enter the number: ");
    scanf("%d",&num);
    for(counter=1;counter<=num;counter+=1)
    {
        printf("%5d ",counter);
        if(counter%10==0)
        {
            printf("\n");
        }
    }
    return 0;
}