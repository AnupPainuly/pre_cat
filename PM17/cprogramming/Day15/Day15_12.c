#include<stdio.h>

void show_message()
{
    printf("Inside Show_message()...\n");
}
void print_message()
{
    printf("Inside print_message()...\n");
}
/* int main()
{

    printf("address of main =%u \n",main);
    printf("address of show_message =%u \n",show_message);
    printf("address of print_message =%u \n",print_message);


    show_message(); //called function using traditional method


    print_message();

} */

/* int main()
{
    //fnptr here is ready to store address of any such function
    //which do not take any argument
    //and which do not return any value

    void (*fnptr)();


    fnptr = show_message;
    show_message();//original way of calling function
    (*fnptr)(); //call to function via pointer to function

    fnptr= print_message;
    print_message();
    (*fnptr)();
}
 */

int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int main()
{
    int a=2,b=3,ans;
    //fnptr is ready to store address of any such function
    //which takes first arg as int,second arg as int
    //and return int
    int (*fnptr)(int,int);
    ans = add(a,b);
    printf("Answer is = %d\n",ans);
    fnptr = add;
    ans = (*fnptr)(a,b);
    printf("Answer is = %d\n",ans);

    ans = sub(a,b);
    printf("Answer is = %d\n",ans);

    fnptr=sub;
    ans = (*fnptr)(a,b);
    printf("Answer is = %d\n",ans);
}




