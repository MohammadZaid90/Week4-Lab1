#include<iostream>
using namespace std;

int odishEvenish(int a);

int main()
{
  int a;

//User can Enter only 5 digit number
  
  cout<<"Enter the 5 digit number: ";
  cin>>a;

  int num = odishEvenish(a);
  if(num == 1)
  {
    cout<<"The number is evenish"<<endl;
  }
  if(num == 0)
  {
    cout<<"The number is odish"<<endl;
  }
}

int odishEvenish(int a)
{
    int b,c,d,e,f,g,d1,d2,d3,d4,d5,sum;

    d1 = a%10;
    c = a/10;

    d2 = c%10;
    d = c/10;

    d3 = d%10;
    e = d/10;

    d4 = e%10;
    f = e/10;

    d5 = f%10;
    g = f/10;
    
    sum  = d1+d2+d3+d4+d5;

    if(sum%2 == 0)
    {
        return 1;
    }

    if(sum%2 != 0)
    {
        return 0;
    }
    return 0;
}