def anglecalc(hours,minutes):
    h=hours
    m=minutes
    if(h<0 or m<0 or h>60 or m>60):
        print("Give correct input")
    elif h==12:
        h=0
    elif m==60:
        m=0
        h=h+1
        if(h>12):
            h=h-12
    h_angle=(h*60+m)*0.5
    m_angle=(m*6)
    angle=abs(h_angle-m_angle)
    angle=min(360-angle,angle)
    return int(angle)

ho=int(input("Enter hour"))
mi=int(input("Enter minute"))
anglehm=anglecalc(ho,mi)
if(anglehm==0):
    print("Hour and minute overlapped")
else:
    print(f"The angle is {anglehm} degrees")
