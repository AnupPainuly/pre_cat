#include<stdio.h>
#define LEN 40
int main(void)
{
    char city[LEN];
    printf("\n Enter the country name: ");
    scanf("%[A-Z]s",city);// the regex %[A-Z]s in scanf scans only capital letters from the input.
                        //NOTE that the string must start with capital letters and scanning stops at first occurence of non-capital letter or other character. 
                        //it wont scan the capital letters occuring after non capital letter/s
                        //if the string does not start with capital letters it will give garbage output.

    printf("\n The country name is: %s ");

}