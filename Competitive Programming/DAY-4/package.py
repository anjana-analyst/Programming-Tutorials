def package(n):
    total_package=0
    hotdogs=8
    while n>=hotdogs:
        n=n-hotdogs
        total_package=total_package+1
    print(total_package)
    
package(400)
