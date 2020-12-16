//Jack bought a 400 hot dogs for the school picnic. If they were contained in packages of 8 hot dogs, hot many total packages did he buy? Create a python program without using / or % operator
#include <iostream>
using namespace std;
int main()
{
    int no_of_packages=0;
    int hotdog=8;
    int total_dogs=400;
    while(total_dogs>=hotdog)
    {
        total_dogs-=hotdog;
        no_of_packages+=1;
    }
    cout<<no_of_packages;
    return 0;
}
