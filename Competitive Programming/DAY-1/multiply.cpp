#include <iostream>

using namespace std;

void Multiply(int n,int i)
{
    if(n<0 || i<=0)
    {
        cout<<"provide correct credentials";
    }
    else
    {
        for(int j=1;j<=i;j++)
            cout<<n<<"*"<<j<<" ="<<n*j<<endl;
    }
}

int main()
{
    int n,i;
    cout<<"Enter the multiplier and multiplicand";
    cin>>n>>i;
    Multiply(n,i);
    return 0;
}
