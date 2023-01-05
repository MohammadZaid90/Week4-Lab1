#include<iostream>
#include<cmath>
using namespace std;

bool symmetry(int a);

int main()
{
  int a;
  
//User can Enter only 3 digit number
 
  cout<<"Enter the 3 digit number: ";
  cin>>a;
   
  int comp = symmetry(a);
  if(comp == 1)
    {
      cout<<"The answer is symmetrical"<<endl;
    }

  if(comp == 0)
    {
      cout<<"The answer is non symmetrical"<<endl;
    }
}

bool symmetry(int a)
{
   int c,d,e,f;
   c = a%10;
   d = a/10;
   e = d%10;
   f = d/10;
   if(c == f)
     {
       return true;
     }
   if(c != f)
     {
       return false;
     }
 return 0;
} 
