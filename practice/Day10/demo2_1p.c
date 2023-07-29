//case 1- value of variale is constant but the value and address of the pointer is not constant
#include<stdio.h>
int main(void)
{
    float const pi=3.14f; // and alernative way of syntax is const float pi=3.14f;
    float *ptr=&pi;
    float newpie=10.14f;
    /*----- pi=4.4f, pi++,pi--,++pi,--pi,pi+=1,pi-=1,pi*=1,pi/=1  ---*/
    //all the above operators (=,increment/decrement,shorthand) are not allowed with the variable pi as it is constant.
    printf("\n the value of pi using the variable is: %.2f",pi);
    printf("\n the value of pi using the pointer *ptr is %.2f",*ptr);

    //changing the value of pointer is allowed
    *ptr=4.4f;
    printf("\n the value of pi using the variable is: %.2f",pi);
    printf("\n the value of pi using the pointer *ptr is %.2f",*ptr);

    //chnaging the address of pointer is allowed
    ptr=&newpie;
    printf("\n the value of pi using the variable is: %.2f",newpie);
    printf("\n the value of pi using the pointer *ptr is %.2f",*ptr);

    printf("\n the size of the pinter is %d",sizeof(ptr));

    return 0;
}