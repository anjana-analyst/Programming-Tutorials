
#include <iostream>

using namespace std;
float averagec(int hours[6])
{
    float sum=0;
    for(int i=0;i<6;i++)
    sum+=hours[i];
    float average=sum/6;
    return average;
}

int main()
{
    int hours[6]={8,10,9,8,7,12};
    cout<<"average time is "<<averagec(hours);
    return 0;
}
