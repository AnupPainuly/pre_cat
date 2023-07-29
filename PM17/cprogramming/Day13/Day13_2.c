#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr= NULL;
    int n,i;
    printf("specify elements to process \n");
    scanf("%d",&n);
    //1. request memory at runtime
    ptr = (int *) malloc(sizeof(int) * n);

    if(ptr==NULL)
    {
        printf("Not enough memory!!!");
        return 0;
    }//if memory not received

    //2. if memory is received sucessfully use it
    for(i=0;i<n;i++)
    {
        *(ptr+i) = i+10;                    //  ptr[0] = *(ptr+0)
    }
    printf("ptr=%u &ptr=%u size=%u\n",ptr,&ptr,sizeof(ptr));
    for(i=0;i<n;i++)
    {
        //printf("%d %u \n",ptr[i],&ptr[i]);
        printf("%d %u \n",*(ptr+i),ptr+i);
    }
    //3. deallocate memory
    free(ptr);//deallocate memory which is pointed by ptr
    //ptr here is dangling pointer
    ptr = NULL;
    return 0;
}