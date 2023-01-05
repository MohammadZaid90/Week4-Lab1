#include<iostream>
using namespace std;

int timeminute(int hour,int minute);
int timehour(int hour,int minute);

int main()
{
    int hour,minute,tHour,tMinut;
   
    cout<<"Enter time in hours: ";
    cin>>hour;

    cout<<"Enter time in minutes: ";
    cin>>minute;
   
    tMinut = timeminute(hour,minute);
    tHour = timehour(hour,minute);

   cout<<"Time is "<<tHour<<":"<<tMinut<<endl;
}

int timeminute(int hour,int minute)
{
   int a,b,c;
    
   a=hour*60;
   b=a+minute+15;
   c = b%60;
   
   return c;
}

int timehour(int hour,int minute)
{
   int a,b,c;
    
   a=hour*60;
   b=a+minute+15;
   c = b/60;
   
 if( c <= 23)
  {
      return c;
  }
if(c >= 24)
  {
     c = 0;
     return c;
  } 
return 0;
}