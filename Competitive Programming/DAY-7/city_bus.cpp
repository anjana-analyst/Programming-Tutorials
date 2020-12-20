#include <iostream>
using namespace std;

int peoples(int n,int people)
{
    if(n==1)
    {
        return people;
        
    }
    else
    {
      people+=1200000;
      peoples(n-1,people);
    }
}

int main()
{
    int n=365, people=1200000;
    cout<<"Total number of people in 365 days "<<peoples(n,people);
    return 0;
}
