 //What will the output of the line number 6 from following snippet:
 #include<stdio.h>
  int main()
 {
    int a,b,c,d,e;
    d = (a=printf("Tom"),b=printf("Jerry"),c=printf("Doremon")); //a=3, b=5, c=7
    e = ++d, a=7,b==5,a++,c++;
    printf("a=%d b=%d c=%d d=%d e=%d\n",a,b,c,d,e);//  8 5 8 8 8
    return 0;

}
/*
*/