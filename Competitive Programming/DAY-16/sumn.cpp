//Write a program to get the sum of n numbers. Eg: Sum of 123 is 6 n is user entered value

#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter a number";
    cin>>n;
    while(n>0)
    {
        sum=sum+(n%10);
        n/=10;
    }
    cout<<"The sum of n numbers is "<<sum;
    return 0;
}
