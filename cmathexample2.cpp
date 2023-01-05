#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  float num1,num2,greater;

  cout<<"Enter num 1: ";
  cin>>num1;

  cout<<"Enter num 2: ";
  cin>>num2;

  greater = max(num1,num2);
  cout<<"the maximum value is: "<<greater<<endl;

  greater = min(num1,num2);
  cout<<"the minimum value is: "<<greater<<endl;

  greater = sqrt(num1);
  cout<<"the square root value is: "<<greater<<endl;

  greater = pow(num1,num2);
  cout<<"the power value is: "<<greater<<endl;

  greater = cbrt(num1);
  cout<<"the cube root value is: "<<greater<<endl;
}