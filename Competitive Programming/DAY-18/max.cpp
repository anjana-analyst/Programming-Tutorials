#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main()
{
    int arr[5]={12,13,8,10,7};
    int n=5;
    cout << "\nThe largest fish that leffy caught is = " <<*max_element(arr, arr + n);
    return 0;
}
