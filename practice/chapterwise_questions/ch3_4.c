#include<stdio.h>
int main(void)
{
    int a=1000000L; //L at the end of values denote long, 
                    //although this declaration is redundant as we intialize a again if for loop.
    for(a=1;a<10;++a); // semi-colon after for loop indicates an empty statement. 
                        //which means if condition in for loop is true it will do nothing.
    {
        printf("%d,",a); 
        return 0;
    }
}