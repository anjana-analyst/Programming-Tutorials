#include<iostream>
using namespace std;
int main()
{
 //assignment operator
 int a;
 a=10;
 //now value 10 is assigned to a ie from right to left
 //short hand assignment or compound assignment
 int b;
 b=a+5; //15
 //operator-1 +=
 b+=5;// so instead of b=b+5 we can write it shortly like this now b would be 20 
 //operator-2 -=
 b-=5; //15
 //operator-3 *=
 b*=5; //75
 //operator-4 /=
 b/=5; //15
 //operator-5 %=
 b%=5; //0
 cout<<a<<" "<<b<<endl;
 //answer would be 10  0
 return 0;
}
