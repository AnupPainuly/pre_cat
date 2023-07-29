#include<stdio.h>
int main( int argc,char **argv)
{
	FILE *src, *trg;
	char buffer[80];

	src=fopen(argv[1],"r");
	if(src=NULL)
	{
		printf("\n the file does not exist");
		return 0;
	}
	trg=fopen(argv[2],"w");
	if(trg==NULL)
	{
		printf("\n Access denied");
		return 0;
	}
	while(fgets(buffer,80,src)!=NULL)
	{
		fputs(buffer,trg);
	}
	fclose(src);
	fclose(trg);

	return 0;
}
