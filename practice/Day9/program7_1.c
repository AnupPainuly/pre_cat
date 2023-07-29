#include<stdio.h>
int main(void)
{
    int marks[2]; // declaration of an array where index is 6.
    int i, sum=0;
    printf("enter the elements of the array: ");
    for(i=0;i<=2;i=i+1)
    {
        scanf("%d",&marks[i]);
        
    }
    for(i=0;i<=2;i=i+1)
    {
       
        sum=sum+marks[i];
    }
    printf("%d sum",sum);
    for(i=0;i<=2;i=i+1)
    {
        printf("\n %d",marks[i]);
    }
    return 0;
}