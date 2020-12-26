#include <iostream>

using namespace std;
void money(int k,int r)
{
    int kara= k*5;
    int rani=r*7;
    if(kara>rani)
    {
        cout<<"Kara has more money by "<<kara-rani<<" cents";
    }
    else if(kara<rani)
    {
        cout<<"Rani has more money by "<<rani-kara<<" cents";
    }
    else
    {
        cout<<"Both have same money "<<rani<<" cents";
    }
}

int main()
{
    int m,n;
    cout<<"Enter the number of glasses kara sold";
    cin>>m;
    cout<<"\nEnter the number of glasses rani sold";
    cin>>n;
    money(m,n);
    return 0;
}
