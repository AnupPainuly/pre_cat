#include<stdio.h>
#define LEN 40
int main(void)
{
    char city[LEN];
    printf("\n enter the city name: ");
    gets(city); //functions 'gets' gives scans the input upto but not including the occurence of newline character "\n"
    printf("\n the city name is %s: ",city);
    return 0;
}