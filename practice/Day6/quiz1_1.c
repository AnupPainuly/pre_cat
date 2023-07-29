//1. Which are the following statements will result in error.
#include<stdio.h>
int main(void)
{
    short char c1; //invalid type specifier short with char
    long char c2; //invalid type specifier long with char
    short int num1;
    long int num2;
    short float f1; //invalid type specifier short with floar
    long float f2; //invalid type specifier long with floar
    short double d1; //invalid type specifier short with char
    long double d2;
    return 0;
}
/*options- 
1.All of these
2.III, IV, V, VI, VII
3.I,II,V,VI,VII
4.None of these*/  