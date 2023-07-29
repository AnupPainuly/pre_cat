#include<stdio.h>
#include<string.h>
#define LEN 40
size_t meristerlen(char const *s);
int main(void)
{
    char src[LEN];
    size_t ans;
    printf("\n enter the string: ");
    gets(src);
    ans=meristerlen(src);
    printf("\n the length of your string is: %d",ans);
    return 0;
}
size_t meristerlen(char const *s)
{
    size_t index;
    for(index=0;*(s+index)!='\0';index++)
    {

    }
    return index;
}
