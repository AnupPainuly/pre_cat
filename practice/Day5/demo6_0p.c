#include<stdio.h>
int main(void)
{
    int num, counter;
    printf("\n Enter the number: ");
    scanf("%d",&num);
    counter=0;
    while(counter<num)
    {
        //counter++; //short hand for counter=counter+1
        counter+=1; //short hand for counter=couter+1

        printf("\n %d",counter);
    }
    return 0;
}