#include <iostream>

using namespace std;

int main()
{
    int n,s;
    cout<<"Enter a number to square";
    cin>>n;
    s=n;
    for(int i=1;i<n;i++)
    {
        s+=n;
    }
    cout<<"\nThe square of "<<n<<" is "<<s;
    return 0;
}
