#include<iostream>
using namespace std;
int main()
{
//Size of operator
int a=10;
cout<<sizeof(a);
//size of operator tells the size of a particular variable and it's compiler dependent generally sizeof(a) will be 4
cout<<sizeof(a++);
//size of operator won't increase as we increase the variable value it tells the size of the datatype it belongs
//Trick-1
char c='a';
c=c+10; 
//here we must know char is an integral type variable and when we do this 'a' is converted to integer 97 according to ASCII table and then added so it would be 107 
//then this 107 is converted to character ie 'k'
cout<<sizeof(c);
//this would be 1 as irrespective of compiler the size of character variable is 1

//Trick-2
int a1[20];
cout<<sizeof(a1);
// as we have array of size 20 and each has capability to occupy int variables generally size 4 so total size=20*4=80
char a2[20];
cout<<sizeof(a2);
//irrespective of compiler the size of char is 1 so 20*1=20 size

//Comma operator
//type-1 as a operator
int i=(5,10);
cout<<i;
//the answer would be 10 because comma operator evaluates the first operand discards them and evaluates second operand and assigns them if its three last value would be evaluated and assigned
//Tip-1
//int i=5,10,30 will give an error because here comma acts as a seperator

//Address operator
int k=20;
cout<<(&k);
//it gives me the address of the variable in hexadecimal format
return 0;
}
