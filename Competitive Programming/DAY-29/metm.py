def time(hh,mm,ss):
    return  hh+(mm/60)+(ss/60)/60
    
def distance():
    m=int(input("Enter the meters"))
    hh=int(input("Enter the hours"))
    mm=int(input("Enter the minutes"))
    ss=int(input("Enter the seconds"))
    miles=(m*0.000621372)/time(hh,mm,ss);
    print("Miles per hour is ",miles)
    
distance()
