#include<stdio.h>

int main()
{
    mem_alloc(20);
}

void mem_alloc(size_t n)
{
    int *ptr =NULL;
    ptr =(int *) malloc(n);
}

//on exit offunction ptr will be released automatically
//hence we will loose access to dynamic memory/heap memory
//which can never be released or used . caused to memory leakage