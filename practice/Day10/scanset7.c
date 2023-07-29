#include<stdio.h>
#define LEN 40
int main(void)
{
    char city[LEN];
    printf("\n Enter the country name: ");
    scanf("%[^A-Z]s",city);// the regex %[^A-Z]s in scanf scans upto but not including the first occurrence of capital letter.
                            //the string startin with capital letter will give garbage output.
    printf("\n The country name is: %s ", city);
    return 0;
}