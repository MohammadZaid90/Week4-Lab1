#include<iostream>
using namespace std;

string uperLowerCase(int ch);

int main()
{
  char ch;
  string a;

    cout << "Enter any character: ";
    cin >> ch;

    a = uperLowerCase(ch);
    cout<<a;
}

string uperLowerCase(int ch)
{
   if(ch == 'A')
    {
       return "You have entered capital Letter 'A'";
    }
  if(ch == 'a')
    { 
        return "You have entered small Letter 'a'";
    }
    return 0;
} 
