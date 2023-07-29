#include<stdio.h>
#include<limits.h>
int main(void)
{
    printf("int %%d %d %d to %d",sizeof(int), INT_MIN, INT_MAX);
    printf("\n short int %%hd %hd %hd to %hd", sizeof(short int), SHRT_MIN, SHRT_MAX);
    printf("\n unsigned char %%c %d %d", sizeof(unsigned char), UCHAR_MAX); // Why is UCHHAR_MIN not defined
    return 0;
}