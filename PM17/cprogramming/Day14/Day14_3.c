

struct 
{
    int day;
    int month;
    int year;
}d1;//anonymous structure //d1 is global variable

typedef struct 
{
    int bkid;
    char bkname[20];
    float price;
}BOOK; //BOOK here is another name to anonymous struct

int main()
{
    struct emp
    {
        int empno;
        char ename[20];
        float salary;
    }e1; //e1 here local variable
    BOOK b1; //b1 here is created using nick name
    struct emp e2;


}

void display_emp_data()
{
    //struct emp e3;
}