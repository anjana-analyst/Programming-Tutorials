n = int(input("Display multiplication table of? "))
i = int(input("Display till? "))
if n<0 or i<=0:
    print("Provide correct credentials")
else:
    for j in range(1,i+1):
       print(n, 'x', j, '=', n*j)
