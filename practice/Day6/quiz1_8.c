//Which of the following statement is correct about the code snippet given below?
#include<stdio.h>
int main(void)
{int num;
num = 5;
printf("%d", ++num++ );// lvalue error
return 0;
}
/*
answers-
1.code will print 5
2.code will print 6
3.code will result in L-value required
4.code will result in R-value required
*/