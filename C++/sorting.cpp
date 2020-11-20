#include<iostream>
using namespace std;
template <class T>

//bubblesort
void bubblesort(T a[],int n)
{
int i,j;
for(i=1;i<n;i++)
{
  for(j=0;j<n-i;j++)
  {
     if(a[j]>a[j+1])
     {
       T temp;
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
     }
  }
}  
for(int k=0;k<n;k++)
cout<<a[k]<<" ";
cout<<endl;
}

//insertion
void insertionsort(T a[],int n)
{
  int i,j;
  T key;
  for (i = 1; i <= n-1; i++) 
    {  
        key = a[i];  
        j = i - 1;       
        while (j >= 0 && key<a[j]) 
         {  
            a[j + 1] = a[j];  
            j = j - 1;  
         }  
         a[j + 1] = key;  
    }
  for(int k=0;k<n;k++)
    cout<<a[k]<<" ";
}


int main()
{
 int arr[5]={10,5,4,3,1};
 char ar[6]={'x','b','c','z','a'};
 bubblesort(arr,5);
 insertionsort(ar,6);
 return 0;
}
