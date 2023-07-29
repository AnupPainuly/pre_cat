#include<stdio.h>

typedef union 
{
    char grade;
    int total;
}RESULT;

int main()
{
    RESULT res;
    printf("size =%d \n",sizeof(res));

    res.total = 789;
    printf("Total = %d grade=%d",res.total,res.grade);

    res.grade = 'A';
    printf("Total = %d grade=%d",res.total,res.grade);
}

//00000000 00000000 00000011 00010101
//  00000000 00000000 00000011 01000001