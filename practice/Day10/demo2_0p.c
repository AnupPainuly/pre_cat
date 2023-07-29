#include<stdio.h>
int main(void)
{
    float pi=3.14f;
    float *ptr=&pi;
    printf("\n The value of pi using the varible is %.2f: ",pi);
    printf("\n The value of pi using the pointer *ptr= %.2f:" ,*ptr);
    *ptr=4.14f; //it is accepatable to change the value with the help of pointer as value of pointer is not constant.
    printf("\n the value of pi using the variable is %.2f: ", pi);
    printf("\n the value of pi using the poitner *ptr= %.2f",*ptr);
    printf("\n the size of the pointer is: %d",sizeof(ptr));

    return 0;

}