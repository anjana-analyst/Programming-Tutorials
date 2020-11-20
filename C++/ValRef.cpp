#include<iostream>
using namespace std;

void swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
}

void swapref(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

int main()
{
  int a=10,b=20;
  cout<<"Call by Value\n";
  cout<<"a is before swap =" <<a<<endl;
  cout<<"b is before swap =" <<b<<endl;
  swap(a,b);
  cout<<"a is after swap =" <<a<<endl;
  cout<<"b is after swap =" <<b<<endl;
  
  cout<<"Call By reference\n";
  cout<<"a is before swap =" <<a<<endl;
  cout<<"b is before swap =" <<b<<endl;
  swapref(&a,&b);
  cout<<"a is after swap =" <<a<<endl;
  cout<<"b is after swap =" <<b<<endl;
  return 0;
}
