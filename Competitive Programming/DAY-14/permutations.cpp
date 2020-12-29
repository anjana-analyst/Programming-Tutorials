#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void display(string a[], int n) 
{ 
    for (int i = 0; i < n; i++)
    { 
        cout << a[i] << "  "; 
    } 
    cout << endl; 
} 
  
void findPermutations(string a[], int n) 
{ 
    sort(a, a + n); 
    cout << "Possible permutations are:\n"; 
    do 
    { 
        display(a, n); 
    } while (next_permutation(a, a + n)); 
} 

int main() 
{ 
  
    string a[] = { "Ram", "Arul", "Deepak", "Ravi"}; 
  
    int n = sizeof(a) / sizeof(a[0]); 
  
    findPermutations(a, n); 
  
    return 0; 
} 
  
  
  
