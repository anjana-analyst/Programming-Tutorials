#include<iostream>
using namespace std;
template <class T>
 class Stack
 {
     T st[10];
     int top;
     public:
     Stack()
     {
         top=0;
     }
     void push(T var)
     {
         if(st[top]==9)
         cout<<"Stack full";
         else
         {
             st[top]=var;
             top++;
         }
     }
     T pop()
     {
         if(st[top]==0)
         cout<<"no element found";
         else
         {
             top--;
             cout<<st[top]<<" is deleted"<<endl;
             
         }
        return st[top];
     }
    
     
 };
 
int main()
{
Stack <char> s;
s.push('R');
s.push('E');
s.pop();
return 0;
}
