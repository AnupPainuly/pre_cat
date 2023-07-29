#include<stdio.h>
int main()
{
	int num,multiple,ans;
	printf("\n enter the number:");
	scanf("%d",&num);
	for(multiple=1;multiple<=10;multiple++)
	{
		ans=num*multiple;
		printf("\n %d x %d =%d",num,multiple,ans);
	}
	return 0;
}
