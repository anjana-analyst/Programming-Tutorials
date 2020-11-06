#include<iostream>
using namespace std;
int main()
{
int a=10;
//Increment
cout<<(a++);
//this is called post increment first it will assign and then increment so the ans would be 10 but if we print and see a's value we will get 11
int b=5;
cout<<(++b);
//this is called pre increment first it will increment and then assign so b's value would be 6

//decrement
int c=10;
cout<<(c--);
//this is called post decrement first it will assign and then decrement so the ans would be 10 but if we print and see c's value we will get 9
int d=5;
cout<<(--d);
//this is called pre decrement first it will decrement and then assign so d's value would be 4

//combination of increment pre and post
//variant-1
cout<<(a++,++a);
//the answer would be 13 as a is 11 so a++ it would be assigned with 11 and then incremented and the result is discarded then a=12 so ++a is 13 and that result is stored and excecuted

//combination ov decrement pre and post
//variant-1
cout<<(a--,--a);
//the answer would be 13 which will be assigned and then decremented so a=12 and --a would decrement first from 12 to 11 and then assign to a now the answer would be 11

//combination of both increment and decrement
//variant-1
cout<<(a++,a--);
//now a is 11 so a++ a is assigned with 11 and incremented so it becomes 12 then a-- 12 is assigned and then decremented so the answer would be the last assigned value ie 12

return 0;
}
