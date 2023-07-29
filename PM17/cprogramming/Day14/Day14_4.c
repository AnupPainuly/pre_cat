#include<stdio.h>

typedef struct
{
    int day,month,year;
}DATE;
typedef struct 
{
    int empno; //4 bytes
    struct
    {
        char fname[20];
        char mname[20];
        char lname[20];
    }ename; //60 bytes
    DATE dob; //12 bytes
    float salary; //4 bytes
}EMPLOYEE;

int main()
{
    EMPLOYEE e1;
    e1.empno = 101;
    e1.dob.day = 3;
    e1.dob.month =10;
    e1.dob.year=2022;
    strcpy(e1.ename.fname,"aaa");
    strcpy(e1.ename.mname,"mmm");
    strcpy(e1.ename.lname,"ccc");
    e1.salary = 67.89;
    
}