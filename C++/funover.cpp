#include <iostream>
#include <string.h>
using namespace std;
char *concat(char a[10],char b[10])
{
    strcat(a,b);
    return a;
}

char *concat(char a[10],char b[10],int n)
{
    
    strncat(a,b,n);
    return a;
}

char *copy(char a[10],char b[10])
{
    strcpy(a,b);
    return a;
}

char *copy(char a[10],char b[10],int n)
{
    strncpy(a,b,n);
    return a;
}
int main()
{
    char a[10],b[10],copya[10],copyb[10];
    cout<<"Enter a string";
    cin>>a;
    cout<<"\n"<<"Enter another string to concat";
    cin>>b;
    cout<<"strcpy and strcat "<<endl;
    cout<<"Copy fn a-copy a "<<copy(copya,a)<<endl;
    cout<<"Copy fn b-copy a "<<copy(copyb,b)<<endl;
    cout<<"Concated string "<<concat(copya,copyb)<<endl;
    
    int n;
    cout<<"enter a no to slice and copy "<<endl;
    cin>>n;
    cout<<"strncpy and strncat"<<endl;
    cout<<"Copy fn a-copy a "<<copy(copya,a,n)<<endl;
    cout<<"Copy fn b-copy a "<<copy(copyb,b,n)<<endl;
    cout<<"Concated string with limit "<<concat(copya,copyb,n)<<endl;
    return 0;
}
