#include<iostream>
using namespace std;

int sum(int a,int b)
{
   return a+b;
}

int diff(int a,int b)
{
   return a-b;
}

int mul(int a,int b)
{
   return a*b;
}

float avg(int a,int b)
{
   return float(a+b)/float(2);
}

int max(int a,int b)
{
   if(a>b)
   return a;
   else
   return b;
}

int min(int a,int b)
{
   if(a<b)
   return a;
   else
   return b;
}

int main()
{
    cout<<"Enter two numbers";
    int a,b;
    cin>>a>>b;
    cout<<"The sum of "<<a<<" and "<<b<<"is "<<sum(a,b)<<endl;
    cout<<"The difference of "<<a<<" and "<<b<<"is "<<diff(a,b)<<endl;
    cout<<"The product of "<<a<<" and "<<b<<"is "<<mul(a,b)<<endl;
    cout<<"The average of "<<a<<" and "<<b<<"is "<<avg(a,b)<<endl;
    cout<<"The maximum of "<<a<<" and "<<b<<"is "<<max(a,b)<<endl;
    cout<<"The minimum of "<<a<<" and "<<b<<"is "<<min(a,b);
    return 0;
}
