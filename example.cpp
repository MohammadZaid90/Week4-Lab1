#include<iostream>
#include<cmath>
using namespace std;

int add(int number1,int number2);
float divide(float number1,float number2);
float power(int number1,int number2);
int max(int number1,int number2);

int main()
{
  float number1,number2,total1;
  float total2;

  cout<<"Enter the first number: ";
  cin>>number1;
  cout<<"Enter the second number: ";
  cin>>number2;
  
  total1 = add(number1,number2);
  cout<<"The sum is: "<<total1<<endl;
  
  total2 = divide(number1,number2);
  cout<<"The division is: "<<total2<<endl;

  total1 = max(number1,number2);
  cout<<"The maximun number is: "<<total1<<endl;

  total2 = power(number1,number2);
  cout<<"The power is: "<<total2<<endl;
}

int add(int number1,int number2)
{ 
   int sum = number1+number2;
   return sum;
}

float divide(float number1,float number2)
{ 
   float division = number1/number2;
   return division;
}

float power(int number1,int number2)
{ 
   float p = pow(number1,number2);
   return p;
}

int max(int number1,int number2)
{
  if(number1>number2)
    {  
      return number1;
    }
   
  if(number2>number1)
    {
      return number2;
    }
 return 0;
}// we use retun 0 because program does'nt recognize return number