/* #include "stdio.h" //file is first searched in current project folder if not found then will be searched inside include folder of compiler
#include<stdio.h> //file is directly searched inside include folder of compiler
int main()
{
    printf("Test line");   
} */

#include<stdio.h>
/* #define PI 3.14             //const float PI =3.14 
int main()
{
    float area;
    area = 3 * 3 * PI;
    printf("PI = %.2f area = %.2f",PI,area);
} */

/* #define SQR(x) x * x
int main()
{
    int a=2,b=3;
    printf("square = %d\n", SQR(a+b)); //a+b*a+b
                                       //2+3*2+3
}
 */

/* #define SQR(x) (x) * (x)
int main()
{
    int a=2,b=3;
    printf("square = %d\n", SQR(a+b)); //a+b*a+b
                                       //(2+3)*(2+3)
} */

#include<stdio.h>
/* #define SWAP(x,y,type) {type temp; temp=x; x=y; y=temp;}
int main()
{
    int a=2,b=3;
    printf("Before Swap a=%d b=%d\n",a,b);
    SWAP(a,b,int);
    printf("After Swap a=%d b=%d",a,b);
    SWAP(a,b,int);
    printf("After Swap a=%d b=%d",a,b);
    SWAP(a,b,int);
    printf("After Swap a=%d b=%d",a,b);
} */
/* 
#define STRINGIZE(x) printf("String = %s",#x);
int main()
{
    STRINGIZE(SUNBEAM) //printf("String = %s","SUNBEAM");
} */

/* #define CONCATE(x,y)  x##y
int main()
{
    int re=12,turn=45;
    CONCATE(re,turn) 0;         //return  0;
    printf("After statement...\n");

}
 */
#define SIZE 5
int main() //example of conditional compilation
{
    #ifndef SIZE 
        printf("Already defined");
    #else  
         printf("not ....defined");
         #undef SIZE
         #define SIZE 2
         printf("%d",SIZE);
    #endif
}

