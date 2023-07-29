#include<stdio.h>

#pragma pack(1) 

struct test
{
    int num;
    char ch;
};

int main()
{
    printf("size = %u \n",sizeof(struct test));
}