#include <iostream>

using namespace std;

void iRoman(int n) 
{
    string str_romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string result = "";

    for (int i = 0; i < 13; ++i)
    {
        while(n - values[i] >= 0)
         {
            result += str_romans[i];
            n -= values[i];
         }
    }

    cout<<"The Roman Numeral is "<<result<<endl;
}

int main()
{
    int j,n,value;
    cout<<"Enter Julius Book count";
    cin>>j;
    cout<<"Enter Nancy book count";
    cin>>n;
    value=j+n;
    iRoman(value);
}
