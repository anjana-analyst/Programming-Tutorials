#include <iostream>

using namespace std;

void hours(float m1,float m2)
{
    float hr1=m1/60;
    float hr2=m2/60;
    cout<<"Total hours "<<hr1+hr2;
    
}
int main()
{
    hours(100,110);
    return 0;
}
