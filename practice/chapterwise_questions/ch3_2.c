#include<stdio.h>
int main(void)
{
    int a=3, b=6;
    printf("%d", a!=b?0?b:a:b); // imagine ternary operators with if else for ease of understanding.
                                /*
                                if (a!=b)
                                {
                                    if(0)
                                    {
                                        b
                                    }
                                    else
                                    {
                                        a
                                    }
                                }
                                else
                                {
                                        b
                                }  
                                */
    return 0;
}