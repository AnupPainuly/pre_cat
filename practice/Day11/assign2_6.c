//check if the given number is palindrome
#include<stdio.h>
int main(void)
{
    int num,u,t,t2,h,h2,h3,th,th2,tth,palindrome;
    printf("\n enter the number: ");
    scanf("%d",&num);
    u=num%10;// units place
    t=num%100;
    t2=t/10;//tenths place
    h=num%1000;
    h2=h/100;
    h3=h2%10;//hundreths place
    th=num/1000;
    th2=th%10;// thousands place
    tth=num/10000;// ten thousands place
    //printf("\n %d%d%d%d%d",u,t2,h3,th2,tth);
    palindrome=tth+th2*10+h3*100+t2*1000+u*10000; //number in reverse order
    //printf("\n %d, %d",num,palindrome);
    if(num<9999 || num>99999) //to make sure the input is a 5 digit number
    {
        printf("invalid operation");        
    }
    else if(num==palindrome)
    {
        printf("\n the given number is a palindrome");
    }
    else
    {
        printf("\n the number is not a palindrome");
    }
    return 0;    
}