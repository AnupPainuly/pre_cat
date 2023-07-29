#include<stdio.h>
//wild pointer which is not initialised at the time declaration
/* int main()
{
    int *ptr; //wild pointer //pointer to integer designed to store address of int
    
    char *cptr=NULL;//NULL POINTER  //pointer to char designed to store address of char

    int num = 789;
    ptr = &num;
    printf("*ptr = %d \n",*ptr);

    cptr = &num;
    printf("*cptr = %d \n",*cptr);
    printf("*cptr = %d\n",*(int *)cptr);
}
 */
//00000000  00000000 00000011 00010101 

/* 00000000        //111
00000000        //110
00000011        //109
00010101        //108 */


int main()
{
    int num = 789;
    char ch = 'A';
    void *vptr = NULL; //it unknown about scale

    vptr = &num; //assigned address of int
    printf("Value of num = %d",*(int *)vptr);

    vptr = &ch; //assigned address of char
    printf("Value of num = %d",*(char *)vptr);

}




