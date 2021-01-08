#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the temperature in celsius";
    float c;
    cin>>c;
    float d=float(9)/float(5);
    float f= (c*d)+32;
    cout<<"The degree in farenheit is "<<f<<endl;
    return 0;
}
