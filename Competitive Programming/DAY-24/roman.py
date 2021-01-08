num_map=[(1000,'M'),(900,'CM'),(500,'D'),(400,'CD'),(100,'C'),
(90,'XC'),(50,'L'),(40,'XL'),(10,'X'),(9,'IX'),(5,'V'),(4,'IV'),(1,'I')]

def nr(num):
    roman=""
    while num>0:
        for i,r in num_map:
            while num>=i:
                roman=roman+r
                num=num-i
    print("The roman numeral is ",roman)
    
j=int(input("Enter Julius Book Count"))
n=int(input("Enter Nancy Book Count"))
value=j+n
nr(value)
