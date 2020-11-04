//There are basically 49 header files that are available in C++
#include<iostream>
//This is nothing but input output stream it contains all fn of taking an input and producing an output
using namespace std;
//“std” is an abbreviation for standard. So that means we use all the things with in “std” namespace. If we don’t want to use this line of code, we use std::cout, std::endl.
//If this namespace is not used, then computer finds for the cout, cin and endl etc.. Computer cannot identify those and therefore it throws errors
int main()
{
  int a;
  //declaration of integer variable
  a=10;
  //assinging the variable
  cout<<a;
  //print the variable if we don't use namespace do std::cout<<a
  int b;
  cin>>b;
  //taking an input from the user
  cout<<a<<b;
  //multiple variables you want to produce the answer in console you can do like this
  return 0;
  //It denotes that program is excecuted successfully
 } 
//Note: we can take any type of input on same cin like int a; char b; cin>>a>>b; we can do the compiler will undersatnd and assign 
