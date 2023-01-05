#include<iostream>
using namespace std;

int p2Flow(float vol,float p1,float p2,float time);
int p1Flow(float vol,float p1,float p2,float time);
int poolFill(float vol,float p1,float p2,float time);
void overFlow(float vol,float p1,float p2,float time);

int main()
{
  float vol,p1,p2,time;
  cout<<"Enter the volume of the pool: ";
  cin>>vol;

  cout<<"Enter the flow rate of pipe 1 per hour: ";
  cin>>p1;

  cout<<"Enter the flow rate of pipe 2 per hour: ";
  cin>>p2;

  cout<<"Enter the hours when the workers are absent: ";
  cin>>time;

  overFlow(vol,p1,p2,time);
}

int poolFill(float vol,float p1,float p2,float time)
{
    float a,b,c;
    a = (p1*time)+(p2*time);
    b =(a/vol)*100;

    if (b <= 100)
   {
    return b;
   }

   if (b > 100)
   {
    return a;
   }
}

int p1Flow(float vol,float p1,float p2,float time)
{
    float a,b,c;
    a = p1+p2;
    b = p1*time;
    c = (p1/a)*100;
   
   return c;

}

int p2Flow(float vol,float p1,float p2,float time)
{
    float a,b,c;
    a = p1+p2;
    b = p2*time;
    c = (p2/a)*100;
 
        return c;
}

void overFlow(float vol,float p1,float p2,float time)
{
    float a1,a2,a3;

  a1 = poolFill(vol,p1,p2,time);
  a2 = p1Flow(vol,p1,p2,time);
  a3 = p2Flow(vol,p1,p2,time);
   if(a1 <= 100)
     {
        cout<<"The pool is "<<a1<<"% full. Pipe 1: "<<a2<<"% Pipe 2: "<<a3<<"%"<<endl;
     }

        if(a1 > 100)
     {
        a1 = a1 - vol;
        cout<<"For "<<time<<" The pool is over Flow with "<<a1<<" litres"<<endl;
     }
}