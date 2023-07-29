#include<stdio.h>
int main(void)
{
    char ch=65; // format specifier char means by default it is unsigned char with range -128 to 127.
    int x=9;
    printf("%d, %d,",sizeof(ch),sizeof('A')); // output:1,4
                                             // size of character is 1 byte which is equal to 8 bit.
                                            //'A' is stored with an ASCII value which is int hence sizeof('A') is 4 byte.
    printf("%d, %d,",sizeof(65), sizeof(++x));// output:4,4 
                                            //the increment operator as an argument inside of sizeof(++x) doesnt do increment.
                                            //it only gives the size of the variable x which is an int hence the ouput is 4.
    printf("%d",x); //output: 9
    return 0;
}