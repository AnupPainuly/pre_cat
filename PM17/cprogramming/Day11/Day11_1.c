#include<stdio.h>

/* int main()
{
    int arr[3][2];
    printf("size = %u",sizeof(arr));
} */

/* int main()
{
    int arr[3][2] = {{11,22},{33,44},{55,66}};
    int r,c;
    for(r=0;r<3;r++)
    {
        for(c=0;c<2;c++)
        {
            printf("%4d",arr[r][c]);
        }
        printf("\n");
    }
} */


/* int main()
{
    int arr[3][2] = {11,22,33,44,55};
    int r,c;
    for(r=0;r<3;r++)
    {
        for(c=0;c<2;c++)
        {
            printf("%4d",arr[r][c]);
        }
        printf("\n");
    }
} */

int main()
{
    int arr[3][2] = {{11,22},{},{55,66}};
    int r,c;
    for(r=0;r<3;r++)
    {
        for(c=0;c<2;c++)
        {
            printf("%4d",arr[r][c]);
        }
        printf("\n");
    }
}