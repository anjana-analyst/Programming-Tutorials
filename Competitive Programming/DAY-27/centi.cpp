#include <iostream>

using namespace std;

int main()
{
    float cm;
    cout<<"Enter the input in centimeter";
    cin>>cm;
    //To convert it to inch,meter and kilometer
    cout<<"The converted value of "<<cm<<"cm in inch "<<cm/2.54<<endl;
    cout<<"The converted value of "<<cm<<"cm in meter "<<cm/100<<endl;
    cout<<"The converted value of "<<cm<<"cm in kilometer "<<cm/100000<<endl;
    return 0;
}
