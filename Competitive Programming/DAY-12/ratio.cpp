
#include <iostream>

using namespace std;
int gcd(int a,int b)
{
    int g,i;
    for(i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
            g = i;
    }
   return g;
}

int main()
{
    int m=5000000,n=8000;
    int c=gcd(m,n);
    cout<<"Ratio is "<<m/c<<" : "<<n/c;
    return 0;
}
