#include<iostream>
#include<cmath>
using namespace std;

float calculateX1(float a,float b,float c);
float calculateX2(float a,float b,float c);

int main()
{
  float a,b,c,x1,x2;
  cout<<"Enter value of a: ";
  cin>>a;
  cout<<"Enter value of b: ";
  cin>>b;
  cout<<"Enter value of c: ";
  cin>>c;
  
  x1 = calculateX1(a,b,c);
  cout<<"The value of +ve x is: "<<x1<<endl;

  x2 = calculateX2(a,b,c);
  cout<<"The value of -ve x is: "<<x2<<endl;
}

float calculateX1(float a,float b,float c)
{
  float result;
  result = (-(b)+ (sqrt((pow(b,2))-(4*a*c))))/(2*a);
  return result;
}

float calculateX2(float a,float b,float c)
{
  float result;
  result = (-(b)- (sqrt((pow(b,2))-(4*a*c))))/(2*a);
  return result;
}