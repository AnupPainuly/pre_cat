#include<stdio.h>
void dikhao(int a);
int main(void)
{
    int num, result;
    int factorial(int n);
    printf("\n enter the number:" );
    scanf("%d",&num);
    result=factorial(num);
    dikhao(result);
    return 0;
}
int factorial(int n)
{
    int i,res=1;
    for(i=1;i<=n;i++)
    {   
        res=res*i;
    }
    //dikhao(res);
    return res;
}
void dikhao(int a)
{
    printf("result:%d\n",a);
}