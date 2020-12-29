#include <iostream>

using namespace std;

int main()
{
    float spent=42.0,total=12.0;
    float totalEarning=(spent*100.0)/total;
    float totalSpent=totalEarning-spent;
    cout<<"Deposit in saving account is $"<<totalSpent;
    return 0;
}
