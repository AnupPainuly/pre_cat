#include<iostream>
using namespace std;
class lead_days_month{
  
};
class odd_days_year{

};
class months{
  private:
    int jan;
    int feb;
    int march;
    int april;
    int may;
    int june;
    int july;
    int aug;
    int sept;
    int oct;
    int nov;
    int dec;

};
class digit_places{
  private:
  int units;
  int tenths;
  int tenths_temp;
  int hundredths;
  int hundredths_temp;
  int thousandths;
  int thousandths_temp;
  public:
  int last_2_digits(int year){
    units=year%10;
    int ans;
    tenths=year%100;
    tenths_temp=tenths/10;
    hundredths=year/100;
    hundredths_temp=hundredths%10;
    thousandths=year/100;
    thousandths_temp=thousandths/10;
    ans=units+tenths_temp*10;
    return ans;
  }

};
class day_of_week{
  private:
    int Sunday;
    int Monday;
    int Tuesday;
    int Wednesday;
    int Thursday;
    int Friday;
    int Saturday;

};
class date{
  private:
    int date;
    int month;
    int year;
    
};
