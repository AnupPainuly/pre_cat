#include<stdio.h>
/* 
int main()
{
    int arr[3][2] = {11,22,33,44,55,66};
    printf("size=%u arr=%u \n",sizeof(arr),arr);
    printf("size=%u *arr=%u \n",sizeof(*arr),*arr);
    printf("size=%u **arr=%u \n",sizeof(**arr),**arr);
    printf("arr=%u *arr=%u &arr=%u **arr=%u",arr,*arr,&arr,**arr);
} */
/* 
int main()
{
    int arr[3][2] = {11,22,33,44,55,66};
    printf("arr = %u\n",arr);//arr=100 //address of pointer to int //address of row
    printf("arr + 2 = %u\n",arr+2); //100 + 2 //address of row + 2 //2 rows scale factor ahead //116
    printf("*(arr+2)=%u \n",*(arr+2));//address of int //*(100+2) // *(116)
    printf("*(arr+2)+1=%u \n",*(arr+2)+1); //*(100+2) // *(116) = 116 //116+1 //120 //address of int
    printf("*(*(arr+2)+1)=%u \n",*(*(arr+2)+1)); //*(100+2) // *(116) = 116 //116+1 //120 //address of int //*120 = 66
    ++*arr[2];
        //++ **(arr+2)
         //**(arr+2) = **(arr+2) + 1
           //             55 + 1
             //     **(arr+2)=      56
    printf("arr[2][0] = %d\n",arr[2][0]);
}
 */






int main()
{
    char *s = "Sunbeam";
    printf("string = %s\n",s);
   // *s = 'p'; //causing to abnormal temination //*s area is read only cant modify
    printf("string = %s\n",s);
}





