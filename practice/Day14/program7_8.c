#include<stdio.h>
void input(int a[],int n);
void display(int a[], int n);

int main(void)
{
	int arr[5];
	input(arr,5);
	display(arr,5);
	return 0;
}

void input(int a[],int n)
{
	int i;
	printf("\n enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);

	}
}
void display(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}
}
