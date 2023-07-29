#include<stdio.h>
int main()
{
	FILE *fp; //decalaration of file pointer fp
	char ch;
	fp=fopen("Day15_7p.c","r"); //intialization of file pointer fp
	if(fp==NULL)
	{
		printf("\n file does not exist");
		return 0;
	}

	printf("\n current position in file:%ld",ftell(fp)); //ftell funtion gives the current position in the file.
	
	fseek(fp,5,SEEK_SET);
	printf("\n current position in file:%ld",ftell(fp));
	ch=fgetc(fp);
	printf("\n current position in file:%ld,%c",ftell(fp),ch);

	fseek(fp,5,SEEK_CUR);
	printf("\n current position in file:%ld",ftell(fp));
	ch=fgetc(fp);
	printf("\n the character is:%c",ch);
	printf("\n current position in the file:%ld",ftell(fp));

	fseek(fp,1,SEEK_END);
	printf("\n current position in the file:%ld",ftell(fp));
	ch=fgetc(fp);
	printf("\n the character is:%c",ch);
	printf("\n current position in th file:%ld",ftell(fp));

	return 0;
}
