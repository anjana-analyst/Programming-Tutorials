
#include <iostream>

using namespace std;
float averagec(int a,int b,int c,int d,int e,int f,int counts)
{
    float sum=float(a+b+c+d+e+f);
    float average=float(sum/counts);
    return average;
}

int main()
{
    int nhoward=8, npease=10 , ncampbell=9 , ngrace=8 ,nmcarthy=7 , nmurphy=12, nurses=6;
    cout<<"average time is "<<averagec(nhoward,npease,ncampbell,ngrace,nmcarthy,nmurphy,nurses);
    return 0;
}
