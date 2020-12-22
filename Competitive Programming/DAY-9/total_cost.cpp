#include <iostream>

using namespace std;
int main()
 {
     int no_of_sweaters=3,costsw=68,no_of_computergames=1,costcg=75,no_of_bracelets=2,costb=43,rebate=10,refunded=1;
     int total=((no_of_sweaters*costsw)+(no_of_computergames*(costcg-rebate))+(no_of_bracelets*costb)-(refunded*costb));
     cout<<"Total cost is "<<total;
 }
