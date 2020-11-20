#include<iostream>
#define max 20
using namespace std;
int i,n;
int top=0;
class stack
{
int s[20];
public:
void push(int x);
void pop();
void display();
};
//push
void stack::push(int x)
{
if(top==(max-1))
  cout<<"Stack is full";
else
 {
  top++;
  s[top]=x;
 }
}

//pop
void stack::pop()
{
  if(top==0)
   cout<<"stack  is empty";
  else
   top--;
}

//print
void stack::display()
{
  if(top==0)
  cout<<"stack is empty"<<"\n";
  else
  {
    for(i=top;i>0;i--)
     cout<<s[i]<<"\t";
    cout<<"\n";
  }
}

//main function
int main()
{
  stack s;
  s.push(5);
  s.push(6);
  s.pop();
  s.display();
  return 0;
}
