//one dimensional array: Taking input for an array and displaying the array then calculating its average.
#include<stdio.h>
int main()
{
	int i,sum=0;
	float avrg;
	int marks[6];
	printf("\n enter the number of marks");
	for(i=0;i<6;i++)
		{
			scanf("%d",&marks[i]);
		}
	for(i=0;i<6;i++)
		{
			printf("%d,",marks[i]);
			sum=sum+marks[i];
		}
	avrg=(float)sum/6;
	printf("\n the sum is %d and average is:%.2f",sum,avrg);

	return 0;
}	
