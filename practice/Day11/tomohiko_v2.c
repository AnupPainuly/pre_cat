#include<stdio.h>
typedef int Bool;
#define True 2;
#define False 0;
enum months{jan=1,feb,mar,apr,may,jun,jul,aug,
sept,oct,nov,dec}months;
enum days{sun,mon,tue,wed,thurs,fri,sat,Sat=-1}days;
struct date{
  int dd,mm,yy;
}date;
int lead_days_arr[12]={0,3,3,6,1,4,6,2,5,0,3,5};
int last2digits(int year){
    int units, tenths, tenths_temp,hundredths,res;
    int hundredths_temp,thousandths,thousandths_temp;
    units=year%10;
    tenths=year%100;
    tenths_temp=tenths/10;
    hundredths=year/100;
    hundredths_temp=hundredths%10;
    thousandths=year/100;
    thousandths_temp=thousandths/10;
    res=units+tenths_temp*10;
    return res;
}//end of function to get last two digits of the year.
int leap(int year){
  if (year%4==0 && year%100!=0){
    return True;}
  else if(year%4==0 && year%100==0 && year%400==0){
    return True;}
  else return False
}//end of function for a leap year
int cent_odd_days(int year){
  int odd_days;
  int arr[5]={6,4,2,0,6};
  if(date.yy>=1600 && date.yy<=1699)
    odd_days=arr[0];
  else if(date.yy>=1700 && date.yy<=1799)
    odd_days=arr[1];
  else if(date.yy>=1800 && date.yy<=1899)
    odd_days=arr[2];
  else if(date.yy>=1900 && date.yy<=1999)
    odd_days=arr[3];
  else if(date.yy>=2000 && date.yy<=2099)
    odd_days=arr[4];
  return odd_days;
}//end of function for century odd days
int monthly_lead_days(int months){
  int lead_days;
  int lead_days_arr[12]={0,3,3,6,1,4,6,2,5,0,3,5};
  switch(months){
    case jan:lead_days=lead_days_arr[0];break;
    case feb:lead_days=lead_days_arr[1];break;
    case mar:lead_days=lead_days_arr[2];break;
    case apr:lead_days=lead_days_arr[3];break;
    case may:lead_days=lead_days_arr[4];break;
    case jun:lead_days=lead_days_arr[5];break;
    case jul:lead_days=lead_days_arr[6];break;
    case aug:lead_days=lead_days_arr[7];break;
    case sept:lead_days=lead_days_arr[8];break;
    case oct:lead_days=lead_days_arr[9];break;
    case nov:lead_days=lead_days_arr[10];break;
    case dec:lead_days=lead_days_arr[11];break;
    Default:printf("Invalid");break;
  }//end of switch
  return lead_days;
}//end of function for monthly lead days.
int calc(){
  int quotient,ans;
  quotient=last2digits(date.yy)/4;
  ans=(last2digits(date.yy)+quotient+date.dd+cent_odd_days(date.yy)+monthly_lead_days(date.mm))%7;
    if(leap(date.yy) && date.mm==jan){
    ans--;
  }
    else if(leap(date.yy) && date.mm==feb){
    ans--;
  }
  /*     TESTING BLOCK
  printf("\nlast2digits:%d",last2digits(date.yy));
  printf("\nquotient:%d",quotient);
  printf("\ndate is:%d",date.dd);
  printf("\nodd days:%d",cent_odd_days(date.yy));
  printf("\nlead days:%d",monthly_lead_days(date.mm));
  printf("\nCalc Answer:%d",ans);
  */
  return ans;
}//end of function calc

int main(void){
  printf("\nEnter the date,month,year:");
  scanf("%d%d%d",&date.dd,&date.mm,&date.yy);
  printf("Date:%d-%d-%d",date.dd,date.mm,date.yy);
  switch(calc()){
    case sun:printf("\nThe day was Sunday");break;
    case mon:printf("\nThe day was Monday");break;
    case tue:printf("\nThe day was Tuesday");break;
    case wed:printf("\nThe day was Wednesday");break;
    case thurs:printf("\nThe day was Thursday");break;
    case fri:printf("\nThe day was Friday");break;
    case sat:printf("\nThe day was Saturday");break;
    case Sat:printf("\nThe day was Saturday");break;
    Default:printf("\n Invalid in main block");break;
  }//end of switch
  return 0;
} //end of func main
