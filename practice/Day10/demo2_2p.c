//  case 2- variable is constant and value of pointer is constant but address of pointer is not constant
#include<stdio.h>
int main(void)
{
    float const pi=3.14f;
    float const *ptr=&pi;
    float newpie = 10.14f;

    printf("\n the value of pi using the variable: %.2f",pi);
    printf("\n the value of pi using the pointer (*ptr): %.2f",*ptr);

    //*ptr=4.4f; // changing the value at address in pointer is not allowed since it is declared constant
    ptr=&newpie; // changing the address of pointer is allowed as it is not constant.
    printf("\n the value of pi using the variable: %.2f",newpie);
    printf("\n the value of pi using the pointer (*ptr): %.2f",*ptr);
    printf("\n the size of the pointer is: %d",sizeof(ptr));
    return 0;


} 