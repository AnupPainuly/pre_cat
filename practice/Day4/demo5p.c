#include<stdio.h>
int main(void)
{
    int num;
    printf("\n Enter the number");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("\n The number is even ");
    }
    else
    {
        printf("\n The number is odd ");
    }
    return 0; 

}