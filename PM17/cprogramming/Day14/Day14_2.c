#include<stdio.h>

struct emp
{
    int empno;
    char ename[20];
    float salary;
}e1; //e1 here is global variable will receive memory from data section


void display_employee_data_pass_by_address(const struct emp *e)
{
    printf("pass by address %d %s %.2f \n",e->empno,e->ename,e->salary);
    printf("pass by address %d %s %.2f \n",*&(e->empno),e->ename,*&(e->salary));
    printf("pass by address %d %s %.2f \n",(*e).empno,(*e).ename,(*e).salary );
}

void display_employee_data_pass_by_value(struct emp e)
{
    printf("pass by value e2 = %d %s %.2f \n",e.empno,e.ename,e.salary);
    e.salary = 88.90;
}


void display_employee_data_using_global()
{
     printf("global variable e1 = %d %s %.2f \n",e1.empno,e1.ename,e1.salary);
}


int main()
{
    struct date
    {
       int day,month,year;
    }d1; //d1 is local variable and will receive memory from stack
    
    e1.empno = 102;
    strcpy(e1.ename,"xyz");
    e1.salary = 345.77;


    struct emp e2={101,"abc",56.78};

    d1.day = 3;
    d1.month = 10;
    d1.year = 2022;

    display_employee_data_pass_by_value(e2) ; //28 bytes are passed
    display_employee_data_using_global();
    display_employee_data_pass_by_address(&e2); //4 bytes
}
