#include<stdio.h>
int main()
{
	int i, arr[]={1,2,3,4};
	printf("\n printing the elements of array by using base address of the array");
	for(i=0;i<4;i++)
	{
		printf("\n%u,%d",arr+i,*(arr+i));
	}
	return 0;
}
