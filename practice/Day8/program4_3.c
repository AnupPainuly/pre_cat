#include<stdio.h>
int main(void)
{
    int a=11;
    int *p; // declaration of a pointer
    printf("a=%d &a=%u ",a,&a);
    p=&a;// intializing pointer
    printf("p=%u, &p=%u, *p=%d\n,sizeof=%d",p,&p,*p,sizeof(*p));
    return 0;

}