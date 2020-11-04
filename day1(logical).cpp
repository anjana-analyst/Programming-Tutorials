#include<iostream>
using namespace std;
int main()
{
  int a=10,b=20,c=30;
  //Logical operator compares two statements and it has Logical AND,OR,NOT it returns binary 0/1
  //Logical AND here it gives 0
  cout<<(a>b)&&(b>c);
  // In logical AND if the statement is false it will not see the other statement or if the statement is true it checks the other statement to be true or not
  //Logical OR here it gives 1
  cout<<(a>b)||(c>b);
  //In logical OR if first statement is true it won't check/excecute the other condition or if the statement is false it checks the other statement to be true/not
  //Logical NOT
  //In logical not if a statement is true it gives false as output and if a statement is false it gives true
  //Non-zero values are true 
  cout<<!(a)<<!(b);
  //here it gives 1 and 1 if a is 0 then !(a) is 1
  return 0;
  }
 
