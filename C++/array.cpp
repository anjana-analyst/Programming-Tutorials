#include <iostream>
using namespace std;
template <class A>
class arrays 
{
    private:
    int n;
    A arr[50];
    
    public:
    arrays()
    {
        cout<<"Enter no of elements";
        cin>>n;
        cout<<"\nEnter Array elements";
        for(int i=0;i<n;i++)
        cin>>arr[i];
    }
    
    arrays(arrays &obj)
    {
        n=obj.n;
        for(int i=0;i<n;i++)
        arr[i]=obj.arr[i];
    }
    
    void print()
    {
        cout<<"\nThe elements are\n";
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    }
    
    ~arrays()
    {
        cout<<"\n Destructor called"<<endl;
    }
    
};

int main()
{
    arrays <char> a;
    a.print();
    arrays <char> a1=a;
    a1.print();
    return 0;
}
