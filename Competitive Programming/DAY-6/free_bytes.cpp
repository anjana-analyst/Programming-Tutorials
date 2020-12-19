
#include <iostream>

using namespace std;

int main()
{
    int f,n,u,o;
    cin>>f>>u>>o>>n;
    int freesize=(f+o)-n;
    if ((f+o) < n)
    cout<<"FULL"<<endl;
    else
    cout<<"size free is "<<freesize;
    return 0;
}
