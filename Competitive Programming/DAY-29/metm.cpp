#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter the meters";
    float m;
    cin>>m;
    int hh,mm,ss;
    cout<<"Enter the time taken to cover the distance in HH:MM:SS format";
    cin>>hh>>mm>>ss;
    float hours=hh+(mm/60)+(ss/60)/60;
    float miles=(m*0.000621372)/hours;
    cout<<"Miles per hour is "<<miles;
    return 0;
}
