#include<stdio.h>
int main(void)
{
    int num1, num2;
    printf("Enter the numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("%10d%10d",num1,num2); //by default formatting (%d) is right aligned
    printf("\n%-10d%-10d",num1,num2); //to make the output left aligned add negative sign to the formatting.
    {
        float num1, num2;
        printf("\n Enter float number: ");
        scanf("%f%f",&num1,&num2);
        printf("\n %10.2f%10.4f",num1,num2);
    }    
    return 0;
}
   