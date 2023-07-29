#include<stdio.h>
#include<string.h>

struct emp
{
    int empno;//=111;
    char ename[20];
    float salary;
};//pure declaration

int main()
{
    struct emp e1;
    struct emp e2 = {102,"xyz"};
    struct emp e3;
 
    printf("size=%u size=%u\n",sizeof(e1),sizeof(struct emp));
    e1.empno = 101;
    strcpy(e1.ename,"abc");
    e1.salary = 56.78;
    printf("%d %s %.2f \n",e1.empno,e1.ename,e1.salary);
    printf("%u %u %u \n",&e1.empno,&e1.ename,&e1.salary);

    printf("%d %s %.2f \n",e2.empno,e2.ename,e2.salary);
    printf("%u %u %u \n",&e2.empno,&e2.ename,&e2.salary);

    e3 = e1;
    //e3.empno = e1.empno;
    //strcpy(e3.ename,e1.ename);
    //e3.salary = e1.salary;
    
    printf("%d %s %.2f \n",e3.empno,e3.ename,e3.salary);
    printf("%u %u %u \n",&e3.empno,&e3.ename,&e3.salary);   
}