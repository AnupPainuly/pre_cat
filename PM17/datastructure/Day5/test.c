#include<stdio.h>

/* int main()
{
    char ch='A'; //request memory to store char data 
                // declaration and definition //intialisation
    printf("char = %c",ch);  

}
 */
//char = A  ---->65 --->01000001


/* int main()
{
    signed char ch1 = 'A';
    signed char ch2 = 'B';
    char ch3;
    ch3 = ch1 + ch2;
    printf("%d + %d = %d ",ch1,ch2,ch3);
}
 */
//65 + 66 = 131

int main()
{
    signed char ch1 = 'A';
    signed char ch2 = 'B';
    unsigned char ch3; //0 to 255
    ch3 = ch1 + ch2;
    printf("%d + %d = %u ",ch1,ch2,ch3);
}





