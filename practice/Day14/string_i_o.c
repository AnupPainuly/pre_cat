#include<stdio.h>
int main(void)
{
	char str[10];
	printf("\n enter the string:");
/*	scanf("%s",str);// %s is format specifier for string and it scans and prints untill first white space.
	printf("%s",str);*/
	/*scanf("%[^\n]",str);//[^\n] scans until until newline character
	printf("%s",str);*/
	gets(str);
	printf("\n%s",str);
	

	return 0;
}
