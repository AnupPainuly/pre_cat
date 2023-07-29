#include<stdio.h>
void accept_array_elements(int p[3][2]);
void display_array_elements(int p[3][2]);

int main()
{
    int arr[3][2];
    accept_array_elements(arr);
    display_array_elements(arr);
}

void accept_array_elements(int p[3][2]) //int **p //size of p is 4 bytes
{
    int r,c;
    printf("Specify array elements \n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<2;c++)
        {
            scanf("%d",&p[r][c]);    
        }
    }
}

void display_array_elements(int p[3][2]) //int **p //size of p is 4 bytes
{
    int r,c;
    printf("Array elements are \n");
    for(r=0;r<3;r++)
    {
        for(c=0;c<2;c++)
        {
            printf("%d %u\t",p[r][c],&p[r][c]);    
        }
        printf("\n");
    }
}
