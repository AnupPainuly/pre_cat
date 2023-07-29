/*accept the password from the user. if it is correct grant the access, if it is wrong ask for password
two more times before stopping the program*/
/*algorithm*/
/*1.create variables 'attempt', 'password' and 'sentry' with datatype  int
3.assign the value to the variable 'password'.
2.output the text message "enter the 'password'"
3.ask the user for message and store the answer in varaible 'attempt'
4.compare the stored value of attempt with the value of 'password'.
5.if the value is true grant the access.
6.intialize the 'sentry'.
7.continue the loop as long the condition is true.
8.inside the loop change the sentry with 'change code'*/

#include<stdio.h>
int main(void)
{
    int attempt,password,sentry;
    password=123;
    printf("\n enter your password: ");
    scanf("%d",&attempt);
    
    if(attempt==password)
        {
            printf("\n you may enter the dungeon.");
        }
    sentry=0;
    while(sentry<=1)
    {
        sentry=sentry+1;
        if(attempt!=password)
        {
            printf("\n Access denied.");
            printf("\n enter your password again: ");
            scanf("%d",&attempt);
        }
    }
    return 0;
}