#include<stdio.h>
#define LEN 40
int main(void)
{
    char city[LEN];
    printf("\n enter the country name: ");
    scanf("%[^a-z]s",city);// the regex %[^a-z]s in scanf scans upto but not including the first occurrence of small letter.
                            //the string startin with small letter will give garbage output.
    printf("\ The country name is: %s",city);
    return 0;
}