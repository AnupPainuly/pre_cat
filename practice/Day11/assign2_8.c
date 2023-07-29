#include<stdio.h>
int main(void)
{
    int uprice=5,price,qty;
    printf("\n enter the quantity: ");
    scanf("%d",&qty);
    if(qty>30)
    {
        price=uprice*qty*90/100;
        printf("\n the total price is: %d",price);
    }
    else if(qty>50)
    {
         price=uprice*qty*85/100;  
         printf("\n the total price is: %d",price); 
    }
    else{
        price=uprice*qty;
        printf("\n the total price is: %d",price);
    }
    return 0;
}