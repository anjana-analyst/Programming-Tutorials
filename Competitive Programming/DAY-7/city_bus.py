def sum(n,people):
    if n==0:
        return 0
    elif n>0:
       return people+sum(n-1,people)
        
        
n=365
people=1200000
print("Total people a bus can carry in 365 days is ",sum(n,people))
