def gcd(x,y):
    while(y):
        x,y=y,x%y
    return x

m=5000000
n=8000
hcf=gcd(m,n)
print("Ratio is ",int(m/hcf)," : ",int(n/hcf))
