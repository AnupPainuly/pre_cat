//count the number of digits of a given number
#include<stdio.h>
int main(void)
{
    int num,counter;
    printf("\n enter the number: ");
    scanf("%d",&num);
    for(counter=0;num!=0;counter=counter+1)
    {
        num=num/10;
          
    }
    printf("\n the digits of given number is %d",counter);
    return 0;
}
