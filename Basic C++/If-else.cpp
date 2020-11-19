#include<iostream>
using namespace std;
int main()
{
//if-else(1)
int a=10,b=20;
if(a>b)
cout<<a;
else
cout<<b;
//for more than 1 statements only brackets {} are necessary
//if-else(2)
if(a>b)
{
 cout<<"The greatest number is ="<<a;
 a=a-10;
}
else
{
    cout<<"The greatest number is ="<<b;
    b=b-10;
}
//conditional operator

return 0;
