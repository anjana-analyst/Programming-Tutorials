#include<iostream>
using namespace std;
int main()
{
  //bitwise operator- it works with binary numbers
  int a=5,b=6;
  cout<<(a&b);
  //Ans is 4
  //It converts 5 into 0101 and 6 to 0100 and it gives output based on AND operation ie both should be 1 to give 1 other than that 0
  cout<<(a|b);
  //Ans is 7
  //It converts 5 into 0101 and 6 to 0100 and it gives output based on OR operation ie either/both should be 1 to produce 1 other than that 0
  cout<<(a^b);
  //Ans is 3
  //Same and it gives output based on EX-OR ie if both the inputs are same the output would be 0 else 1
  cout<<(a<<2);
  //This is left shift and 0101 and when we left shift it becomes 10100 20
  //Trick for any x<<a use x*2^n
  cout<<(a>>2);
  //This is right shift and when we right shift it becomes 1
  //Trick for any x>>a use x/2^n
  cout<<(~a);
  //Ans is -6
  /*The result of ~ operator on a small number can be a big number if the result is stored in an unsigned variable. 
  And the result may be a negative number if the result is stored in a signed variable
  (assuming that the negative numbers are stored in 2’s complement form where the leftmost bit is the sign bit)*/
 return 0;
}

  
