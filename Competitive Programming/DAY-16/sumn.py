sum=0
n=int(input("Enter a number"))
while n>0:
    sum=sum+(n%10)
    n/=10
print("the sum of the digits in a number is ",int(sum))
