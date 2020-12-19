#include <iostream>
using namespace std;
void best_score(int times[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(times[j]>times[j+1])
            {
                temp=times[j];
                times[j]=times[j+1];
                times[j+1]=temp;
            }
        }
    }
    cout<<"Best score is "<<times[0];
}

int main()
{
    int arr[]={66,57,54,53,64,52,59};
    int n=sizeof(arr)/sizeof(int);
    best_score(arr,n);
    return 0;
}
