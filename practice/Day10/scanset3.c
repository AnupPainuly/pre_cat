#include<stdio.h>
#define LEN 40
int main(void)
{
    char city[LEN];
    printf("\n enter the country name: ");
    scanf("%[^.]s",city); // scanf with regex [^.] scans upto but not including the occurence of '.'
    printf("\n The country name is: %s",city);
    return 0;

}