#include<stdio.h>
int main(void)
{
	int arr[]={1,2,3,4,5};
	int *ptr1 =arr;
	int *ptr2 =&arr[1];
	printf("\n%u,%u,%u",ptr1,ptr1+1,ptr1+2);


	return 0;
}

