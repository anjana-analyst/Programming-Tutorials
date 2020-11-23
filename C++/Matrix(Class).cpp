#include <iostream>
#define max 100

using namespace std;

class Matrix
{
 private:
    int m,n;
    int mat[30][30];
    
public:
   Matrix()
   {
        cout<<"Enter no of rows";
        cin>>m;
        cout<<"\n"<<"Enter no of columns";
        cin>>n;
        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
           {
               cin>>mat[i][j];
           }
        }
   }
   
   Matrix(const Matrix &obj)
   {
       cout<<"Copy Constructor\n";
       m=obj.m;
       n=obj.n;
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               mat[i][j]=obj.mat[i][j];
               mat[i][j]*=2;
               cout<<mat[i][j]<<" ";
           }
       }
   }
   ~Matrix()
   {
       cout<<"\nDestructor called"<<endl;
   }
};
int main() 
{
    Matrix obj1;
    Matrix obj2=obj1;
    return 0;
}
