#include <iostream>
#include <math.h>
using namespace std;

int min(int x, int y) 
{ 
    return (x < y)? x: y; 
     
}

int anglecalc(int hours,int minutes)
{
    if(hours<0||minutes<0||hours>12||minutes>60)
    cout<<"Wrong Input";
    else if(hours==12)
    hours=0;
    else if(minutes==60)
    {
        minutes=0;
        hours+=1;
        if(hours>12)
        {
            hours=hours-12;
        }
    }
    float hour_angle=(hours*60+minutes)*0.5;
    float minute_angle=6*minutes;
    
    float angle=abs(hour_angle-minute_angle);
    
    angle=min(360-angle,angle);
    
    return angle;
    
}

int main()
{
    int hours,minutes;
    cout<<"Enter hours";
    cin>>hours;
    cout<<"Enter minutes";
    cin>>minutes;
    int c=anglecalc(hours,minutes);   
    if(c==0)
    cout<<"Hour and minute overlapped";
    else
    cout<<"Angle is"<<c<<"degrees";
    return 0;
}
