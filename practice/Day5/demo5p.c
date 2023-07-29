//Demonstration for usage of 'goto'. goto used in a fucntion can be only used within the scope of that particular function.

#include<stdio.h>
int main(void)
{
    int age;
    START:
    printf("\n enter the age of the citizen: ");
    scanf("%d",&age); 
    if(age>=18)
    {
        printf("\n the citizen can vote.");
    }
    else
    {
        printf("\n the citizen can not vote.");
    }
    goto START;

    return 0;   
}