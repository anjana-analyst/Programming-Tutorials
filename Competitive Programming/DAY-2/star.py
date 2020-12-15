step=int(input("Enter number of staircase required"))
for i in range(1,step+1):
    if i%2==0:
        k=i
    else:
        k=i+1
        
    for g in range(step,k,-1):
        print(" ",end="")
    
    for j in range(1,k+1):
        print("* ",end="")
    print()
