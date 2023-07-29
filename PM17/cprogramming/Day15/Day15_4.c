#include<stdio.h>

/* int main()
{
    printf("%d", 0x0041);
} */

#pragma pack(1)
struct
{ 
    char ca[10];
    union u
    {
        int i;
        char c;
        long l;
    }u1;
}s1;

int main(void)
{
printf("%d", sizeof(s1)+ sizeof(s1.u1));
return 0;
}