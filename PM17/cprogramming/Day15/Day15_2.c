#include<stdio.h>
#pragma  pack(1)
typedef struct 
{
    unsigned day : 5;
    unsigned  : 3   ;  //anonymous bit field
    unsigned month : 4;
    unsigned year : 11;
    unsigned valid : 1;
}DATE;

int main()
{
    printf("size = %u \n",sizeof(DATE));
    DATE d;
    d.day = 31;
    d.month = 12;
    d.year = 2022;
    d.valid = 1;    //valid date
    printf("%d-%d-%d status of date=%d\n",d.day,d.month,d.year,d.valid);

   // scanf("%d",&d.day);
}