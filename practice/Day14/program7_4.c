#include<stdio.h>
int main()
{
	int i,arr[]={1,2,3,4,5};
	int *ptr=&arr[0];	
	printf("\n printing by counter increment");
	for(i=0;i<4;i++)//prints the address and vaue of each element in the array via counter increment.
	{
	printf("\n %u,%d",ptr+i,*(ptr+i));
	}
	
	printf("\n printing by counter increment");
	for(i=0;i<4;i++,ptr++)//prints the address and vaue of each element in the array via pointer increment.
	{
	printf("\n%u,%d",ptr,*(ptr));
	}

	return 0;	
}
