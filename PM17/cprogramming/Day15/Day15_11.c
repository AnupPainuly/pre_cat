#include<stdio.h>
typedef struct 
{
    int rollno;
    char sname[20];
    int marks;
}STUDENT;
typedef enum {EXIT,ADDSTUDENT,DISPLAYSTUDENT}MENU;


MENU menu_choice()
{
    MENU mchoice;
    printf("0. Exit \n");
    printf("1. Add Student Record\n");
    printf("2. Display Student Records\n");
    scanf("%d",&mchoice);
    return mchoice;
}
void accept_student_data(STUDENT *s)
{
    printf("Specify Roll no. \n");
    scanf("%d",&s->rollno);

    printf("Specify Student Name \n");
    scanf("%*c"); // getchar()
    gets(s->sname);

    printf("Specify Student Marks \n");
    scanf("%d",&s->marks);
}

void display_student_data(STUDENT *s)
{
    printf("%d %s %d \n",s->rollno,s->sname,s->marks);
}

void write_student_data_to_file(STUDENT *s)
{
    FILE *fp;
    fp = fopen("student.dat","ab");

    //fprintf(fp,"%d %s %d \n",s->rollno,s->sname,s->marks);
    fwrite(s,sizeof(STUDENT),1,fp);
    fclose(fp);
}

void read_student_data_from_file()
{
    STUDENT s;
    FILE *fp;
    fp = fopen("student.dat","rb");
    if(fp !=NULL)
    {
       // while(fscanf(fp,"%d %s %d",&s.rollno,s.sname,&s.marks)!=EOF) 
        while(fread(&s,sizeof(STUDENT),1,fp)!=0)
        {
            display_student_data(&s);
        }   
        fclose(fp);
    }
}
int main()
{
    STUDENT s;
    MENU mchoice;
    while((mchoice = menu_choice())!=EXIT)
    {
        switch(mchoice)
        {
            case ADDSTUDENT:
                            accept_student_data(&s);
                            write_student_data_to_file(&s);
                            break;
            case DISPLAYSTUDENT:
                            read_student_data_from_file();
                            break;
        }
    }
    
     
}

	STUDENT s;
	fwrite(&s,sizeof(STUDENT),1,fp);

/* 
	STUDENT s[5];
	fwrite(s,sizeof(STUDENT),5,fp);


	STUDENT s[5];
	fwrite(s,sizeof(s),1,fp);


	for(i=0;i<5;i++)
	{
		fwrite(&s[i],sizeof(STUDENT),1,fp);
	}

 */
