#include<stdio.h>
#define LEN 40
int main(void)
{

    char city[LEN];
    printf("\n Enter the country name: ");
    scanf("%[^*]s",city); //the regex %[^*]s in scanf scan the input upto but not including the '*'.
    printf("the country name is %s",city);
    return 0;
}