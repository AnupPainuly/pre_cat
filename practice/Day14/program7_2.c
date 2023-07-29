//pointer to an array
#include<stdio.h>
int main(void)
{

	int arr[]={1,2,4};
	//int *ptr =&arr[]; //pointer declaration and intialization without index of an array not allowed
	int *ptr =arr;
	//int *ptr =&arr[0];
	printf("\n accesing the value using array notation \n%d,%d",arr[0],arr[1]);
	printf("\n accessing the value using the pointer \n%d,%d",*ptr,*ptr+1);

	return 0;
}
