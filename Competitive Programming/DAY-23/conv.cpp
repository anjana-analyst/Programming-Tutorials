#include <iostreaM>
using namespace std;

void dB(int n) 
{ 
    int b[32];
    int i = 0; 
    while (n > 0) 
    { 
        b[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 
 
 
int main() 
{ 
    int n = 17; 
    dB(n); 
    return 0; 
} 
