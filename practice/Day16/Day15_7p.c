#include<stdio.h>
int main(void)
{
	FILE *fp;
	char ch;
	fp=fopen("test_file.txt","r");
	if(fp==NULL)
	{
		printf("File does not exist");
		return 0;
	}
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	return 0;
}
