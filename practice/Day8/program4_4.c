#include<stdio.h>
int main(void)
{
    int a=11;
    int *p;
    int **pp;
    p=&a;
    pp=&p;
    printf("a=%d,&a=%u \n",a,&a);
    printf("p=%u, &p=%u,*p=%d \n",p,&p,*p);
    printf("pp=%u,&pp=%u,*pp=%u,**pp=%d \n",pp,&pp,*pp,**pp);

    return 0;

}