def sq(n):
    s=n
    for i in range(1,n):
        s=s+n
    return s

if __name__ == '__main__':
    n=int(input("Enter a number to square"))
    print("Square of",n,"is",sq(n))
