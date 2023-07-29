#include<stdio.h>
enum months{jan=1,feb,mar,apr,may,jun,jul,aug,
sept,oct,nov,dec}months;
int monthly_lead_days(int months){
  int lead_days;
  int lead_days_arr[12]={0,3,3,6,1,4,6,2,5,0,3,5};
  switch(months)
  {
    case feb: lead_days=lead_days_arr[2];
  }
  printf("\nlead:%d",lead_days);
  return lead_days;
}
int main(void){
    monthly_lead_days(feb);
    return 0;
}
