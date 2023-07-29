#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4};
	int *ptr=arr;
	printf("\n%d,%d",sizeof(ptr),sizeof(arr));
	printf("\n%u",ptr);
	ptr++;
	printf("\n%u",ptr);
	/*arr++;*/ // L-value required error as we can not use increment operator on array name unless it is passed as function variable.

	return 0;
}
