#include <iostream>

using namespace std;

int main(){

    int *ptr1, *ptr2, k=0,j=0;
    ptr1 = new int;
    ptr2 = ptr1;
    
    while(1) {
        cout<<"Enter a number : "<<endl;
        cin>>*ptr1;

        if (*ptr1 == 0) {
            break;
        }   
        ptr1++;
        k++;

    }

    
    for(int i=0;i<k;i++){
        cout<<*ptr2<<endl;
        ptr2++;
    }

    return 0;
}
