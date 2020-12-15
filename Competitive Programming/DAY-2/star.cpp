#include <iostream>

using namespace std;


void star(int step)
{
    for(int i=1;i<=step;i++)
    {
        int k=(i%2==0)?i:i+1;
        for(int l=step;l>k;l--)
            cout<<" ";
            
        for(int j=1;j<=k;j++)
            cout<<"* ";
      cout<<endl;  
    }
}
int main()
{
    int n;
    cout<<"Enter number of staircase to be printed";
    cin>>n;
    star(n);
    return 0;
}
