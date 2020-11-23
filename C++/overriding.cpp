#include <iostream>
using namespace std;
class Height
{
    private:
    int in;
    int cm;
    
    public:
    Height()
    {
        in=0;
        cm=0;
    }
    
    Height(int i,int c)
    {
        in=i;
        cm=c;
    }
    friend istream& operator>> (istream& input, Height&h)
    {
      input>>h.in>>h.cm;
      return input;
    }
    
    friend ostream& operator<< (ostream& output, Height&h)
    {
      output<<h.in<<" "<<h.cm<<" ";
      return output;
    }
};

int main()
{
    Height h1(140,40),h2(160,66),h3;
    int n;
    cout<<"Enter the value of your height in cm and inches";
    cin>>h3;
    cout<<h1<<endl;
    cout<<h2<<endl;
    cout<<h3<<endl;
    return 0;
}
