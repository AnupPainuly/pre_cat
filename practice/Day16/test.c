#include<stdio.h>
int main(void)
{
int num1 = 0, num2 = -1 , num3 = -2, num4 = 1, ans;
 ans =             num1++                &&    num2++    ||        ++num4       &&         num3++;
//    num1 is 0 and then increments to 1 && not executed || num4 increments to 2 && num3=-2 and then increments to -1
//   =     f(0)                              && ---------||         t(2)        &&           t (-2)
//   
//   =                             f                     ||                      t
//   =                                                    t
         printf("%d %d %d %d %d",num1, num2, num3, num4, ans);
return 0;
}
