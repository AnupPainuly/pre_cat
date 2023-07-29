#include<stdio.h>
#define LEN 40
int main(void)
{
    char city[LEN];
    printf("\n enter the city name: ");
    scanf("%s",city); //%s scans upto but inclucing the occurence of first white space. 
                    //also city is missing & in scanf because city is an array and it address itself.
    printf("\ncity: %s",city);
}
