#include <iostream>

using namespace std;

int main()
{
    int no_of_miles=2052;
    int no_of_days=6;
    
    int stoppings=2;
    float km=1.609344;
    
    int each_day_travel= no_of_miles/no_of_days;
    float avg_stop= each_day_travel/stoppings;
    avg_stop= avg_stop *km;
    
    cout<<"Average stop between towns is "<<avg_stop;

    return 0;
}
