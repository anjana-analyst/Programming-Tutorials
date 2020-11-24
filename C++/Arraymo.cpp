#include <iostream>
#include <string>
using namespace std;
template <class A>
class arrays 
{
    private:
    A n;
    A arr[50];

    public:
    arrays()
    {
        char k;
        cout<<"Enter no of elements";
        cin>>n;
        if(sizeof(n)==1)
        {
         cout<<"\nEnter Array elements";
         for(int i=0;i<int(n)-'0';i++)
         cin>>arr[i];
        }
        else
        {
         cout<<"\nEnter Array elements";
         for(int i=0;i<n;i++)
         cin>>arr[i];
        }
        
    }
    
    arrays(arrays &obj)
    {
        n=obj.n;
        if(sizeof(n)==1)
        {
         for(int i=0;i<int(n)-'0';i++)
         arr[i]=obj.arr[i];
        }
        else
        {
            for(int i=0;i<(int)n;i++)
            arr[i]=obj.arr[i];
        }
    }
    
    void print()
    {
        cout<<"\nThe elements are\n";
        if(sizeof(n)==1)
        {
          for(int i=0;i<int(n)-'0';i++)
          cout<<arr[i]<<" ";
        }
        else
        {
           for(int i=0;i<(int)n;i++)
           cout<<arr[i]<<" "; 
        }
    }
    
    ~arrays()
    {
        cout<<"\n Destructor called"<<endl;
    }
    
};

int main()
{
    arrays <char> a;
    arrays <int> a2;
    a2.print();
    a.print();
    arrays <char> a1=a;
    a1.print();
    return 0;
}
