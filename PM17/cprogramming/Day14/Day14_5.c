#include<stdio.h>

typedef struct 
{
    int empno;
    char ename[20];
    float salary;
}EMPLOYEE;

void display_employee_data(EMPLOYEE *p)
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("%d %s %.2f \n",p[i].empno,p[i].ename,p[i].salary);
    }
    for(i=0;i<3;i++)
    {
        printf("%d %s %.2f",(*(p+i)).empno,(*(p+i)).ename,(*(p+i)).salary);
    }
    for(i=0;i<3;i++)
    {
        printf("%d %s %.2f",p->empno,p->ename,p->salary);
        p++; // p = p + 1   // 100 + 1 = 128
    }
}
int main()
{
    EMPLOYEE earr[3] = {{101,"aaa",56.78},
                        {102,"bbb",34.67},
                        {103,"ccc",78.89}};
    printf("size = %u\n",sizeof(earr));
    display_employee_data(earr);
}
